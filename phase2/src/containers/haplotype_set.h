/*******************************************************************************
 * Copyright (C) 2018 Olivier Delaneau, University of Lausanne
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 ******************************************************************************/
#ifndef _HAPLOTYPE_SET_H
#define _HAPLOTYPE_SET_H

#include <utils/otools.h>
#include <containers/bitmatrix.h>
#include <containers/variant_map.h>

class haplotype_set {
public:
	//Counts
	unsigned int n_scaffold_variants;			//#variants in scaffold
	unsigned int n_rare_variants;				//#variants rare to be phased
	unsigned int n_common_variants;				//#variants common to be phased (e.g. indels)
	unsigned int n_total_variants;				//#variants in total
	unsigned int n_haplotypes;					//#haplotypes
	unsigned int n_samples;						//#samples

	//Scaffold data
	bitmatrix HShap;							//Bit matrix of haplotypes (haplotype first).
	bitmatrix HSvar;							//Bit matrix of haplotypes (variant first).

	//Unphased data / common sites
	bitmatrix HChap;							//Bit matrix of haplotypes (haplotype first).
	bitmatrix HCvar;							//Bit matrix of haplotypes (variant first).

	//Unphased data / rare sites
	vector < vector < unsigned int > > HRhap;	//Sparse matrix of haplotypes (haplotype first).
	vector < vector < unsigned int > > HRvar;	//Sparse matrix of haplotypes (variant first).

	//CONSTRUCTOR/DESTRUCTOR/INITIALIZATION
	haplotype_set();
	~haplotype_set();
	void clear();
	void allocate(unsigned int,unsigned int , unsigned int , unsigned int, variant_map &);

	//Haplotype routines
	void transposeHaplotypes_H2V();
	void transposeHaplotypes_V2H();
};
#endif
