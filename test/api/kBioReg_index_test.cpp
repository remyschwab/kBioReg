#include <gtest/gtest.h>

#include <seqan3/alphabet/detail/debug_stream_alphabet.hpp>
#include <seqan3/alphabet/nucleotide/dna5.hpp>
#include <seqan3/io/sequence_file/input.hpp>
#include <seqan3/test/expect_range_eq.hpp>

#include "index.h"
#include "arg_parse.h"

TEST(na_test_group, console_log)
{
    // std::string expected{"Indexing 4 genomes... DONE\nWriting to disk... DONE\n"};
    // // index_arguments cmd_args{3, 1, "na_index", DATADIR"ibf_example.fna", 8192, 2, "na"};
    // index_arguments cmd_args{};
    seqan3::debug_stream << DATADIR << std::endl;

    // testing::internal::CaptureStdout();
    // record_list<seqan3::dna5_vector> records;
    // std::filesystem::path acid_lib = DATADIR"ibf_example.fna";
    // uint32_t bin_count = parse_reference_na(acid_lib, records);
    
    // seqan3::debug_stream << "Indexing " << bin_count << " genomes... ";
    // IndexStructure ibf = create_index(records, bin_count, cmd_args);
    // seqan3::debug_stream << "DONE" << std::endl;

    // seqan3::debug_stream << "Writing to disk... ";
    // std::filesystem::path output_path{"na_index.ibf"};
    // store_ibf(ibf, output_path);
    // seqan3::debug_stream << "DONE" << std::endl;
    
    // std::string std_cout = testing::internal::GetCapturedStdout();
    // EXPECT_RANGE_EQ(expected, std_cout);
}


// TEST(na_test_group, index_on_disk)
// {
//     std::filesystem::path tmp_dir = std::filesystem::temp_directory_path(); // get the temp directory
//     convert_fastq(DATADIR"in.fastq", tmp_dir/"out.fasta");                 // create out.fasta

//     // Check if out.fasta is correct
//     using seqan3::operator""_dna5;
//     std::vector<seqan3::dna5_vector> expected_seqs = {"ACGTTTGATTCGCG"_dna5, "TCGGGGGATTCGCG"_dna5};
//     std::vector<std::string> expected_ids{"seq1", "seq2"};
//     std::vector<seqan3::dna5_vector> seqs{};
//     std::vector<std::string> ids{};
//     seqan3::sequence_file_input fin{tmp_dir/"out.fasta"};

//     for (auto & [seq, id, qual] : fin)
//     {
//         ids.push_back(id);
//         seqs.push_back(seq);
//     }
//     EXPECT_RANGE_EQ(seqs, expected_seqs);
//     EXPECT_RANGE_EQ(ids, expected_ids);
// }
