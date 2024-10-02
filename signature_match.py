def count_matching_signatures(file1, file2):
    with open(file1, 'r') as f1, open(file2, 'r') as f2:
        dut_signatures = f1.readlines()
        ref_signatures = f2.readlines()
    
    # Find the minimum number of lines between the two files
    min_signatures = min(len(dut_signatures), len(ref_signatures))
    
    match_count = 0
    
    # Compare signatures up to the shortest file length
    for i in range(min_signatures):
        dut_signature = dut_signatures[i].strip()
        ref_signature = ref_signatures[i].strip()
        
        if dut_signature == ref_signature:
            match_count += 1
    
    # Calculate and print the percentage of matching signatures
    percentage_match = (match_count / min_signatures) * 100
    
    # Print the results
    print(f"Number of signatures compared: {min_signatures}")
    print(f"Number of matching signatures: {match_count}")
    print(f" {match_count} ÷ {min_signatures} = {percentage_match:.6f}")

    return match_count

# Example usage:
file1 = "/home/owais/nucleusrv/riscof_work/rv64i_m/I/src/srli-01.S/dut/DUT-nucleusrv.signature"
file2 = "/home/owais/nucleusrv/riscof_work/rv64i_m/I/src/srli-01.S/ref/Reference-spike.signature"

try:
    matches = count_matching_signatures(file1, file2)
except FileNotFoundError:
    print("One or both files not found.")
except ValueError as e:
    print(e)
