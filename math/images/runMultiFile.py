import os

# List of Python scripts to run
script_name = "calculusNotes_figure_"

# Start each script in a separate process
for i in range(15):
    os.system(f"python {script_name}" + str(i+1) + ".py" + " &")

