# Segmented HAPlotype Estimation and Imputation Tools version 5 (SHAPEIT5)

[![Build](https://github.com/JosephLalli/Shapeit5.2/actions/workflows/build.yml/badge.svg)](https://github.com/JosephLalli/Shapeit5.2/actions) [![Build_Pages](https://github.com/JosephLalli/Shapeit5.2/actions/workflows/pages/pages-build-deployment/badge.svg)](https://github.com/JosephLalli/Shapeit5.2/actions)

SHAPEIT5 estimates haplotypes in large datasets, with a special focus on rare variants.

The prior repository was taken down because past commits included UK Biobank data. Shapeit5.2 is the current iteration. The two repositories will be merged after clearance that this repository is free of protected information. Sorry for the inconvenience.

This copy includes Joseph Lalli's modified switch counter used in the phasing_T2T
analyses. The original static Linux executable is
[`static_bins/SHAPEIT5_switch_static_JLL`](static_bins/SHAPEIT5_switch_static_JLL).
Run it with `./static_bins/SHAPEIT5_switch_static_JLL --help`.
Building `switch/` also uses the modified counter source.

The manuscript cites the original fork commit `e6dd007`. The modified source file
and original executable were recovered from `JosephLalli/phasing_T2T` commit
`9b1ae67c844d0c561b8115849c018b0820d5d231`. This copy combines that source with
the cleaned upstream code; the complete original fork commit was not recovered.

- **docker**: all script needed to build a docker file comprising all binaries
- **docs**: documentation in html
- **ligate**: ligate multiple phased BCF/VCF files into a chromosome length file
- **resources**: genetics maps in b37 and b38 amd coordinates for WGS chunks
- **phase_common**: phase common sites, typically SNP array data
- **phase_rare**: phase rare variants onto a scaffold of common variants
- **static_bins**: static binaries of all executables
- **simulate**: simulate simple haplotype datasets
- **switch**: compute switch error rate and genotyping error rate given simulated or trio data
- **tasks**: scripts used to phase large datasets, good base to start pipelining
- **test**: simulated data for first-step testing of the method
- **versions**: versioning
- **xcftools**: tools to handle XCF files [experimental]

## Download

It is strongly advised to prioritize the use of the latest released version (see released section on the right hand side) instead of cloning the latest version of the source code, as doing so is at your own risk.

## Citation
If you use SHAPEIT5 in your research work, please cite the following paper:

Hofmeister RJ, Ribeiro DM, Rubinacci S., Delaneau O. [Accurate rare variant phasing of whole-genome and whole-exome sequencing data in the UK Biobank](https://www.nature.com/articles/s41588-023-01415-w). Nature Genetics (2023)

## Documentation

Documentation, installation instructions and tutorials can be found at:

[https://github.com/JosephLalli/Shapeit5.2](https://github.com/JosephLalli/Shapeit5.2)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details
