
# Python v3.7

limit = int(input('Input Limit : ')) # Batas Data
karyawan = {} # Deklarasi Dictionary

def line():
    print('========================================')

# Function Kalkulasi Gaji
def Salary(par1,par2):
    if par1 == 1:
        if par2 > 40:
            return int(par2 * 3000 * 1.5)
        else:
            return par2 * 3000
    elif par1 == 2:
        if par2 > 40:
            return int(par2 * 3500 * 1.5)
        else:
            return par2 * 3500
    elif par1 == 3:
        if par2 > 40:
            return int(par2 * 4000 * 1.5)
        else:
            return par2 * 4000
    elif par1 == 4:
        if par2 > 40:
            return int(par2 * 5000 * 1.5)
        else:
            return par2 * 5000
        
# Output Data Terpilih
def found():
    gaji = Salary(int(karyawan[item][1]), int(karyawan[item][2]))
    # Output Data Terpilih
    line()
    print('Nama : {}'.format(karyawan[item][0]))
    print('Golongan : {}'.format(karyawan[item][1]))
    print('Jam kerja : {}'.format(karyawan[item][2]))
    print('Gaji : Rp.{}'.format(gaji))
    line()

# Loop Input
for x in range(limit):
    line()
    print('data ke-{0}'.format(x+1))
    NIK = input('Masukkan NIK : ')
    Name = input('Masukkan Nama : ')
    Gol = input('Masukkan Golongan : ')
    JamKerja = input('Masukkan Jam Kerja : ')
    karyawan[NIK] = [Name,Gol,JamKerja]

# Output Seluruh Data Yang Telah Dimasukkan
line()
print('jumlah data yang tersimpan : {}'.format(len(karyawan)))
print('Data yang tersimpan : ')
for x in karyawan:
    print('NIK : {0}  Nama : {1}  Golongan : {2}  Jam Kerja : {3}'.format(x, karyawan[x][0], karyawan[x][1], karyawan[x][2]))
line()

flag = 1 # Deklarasi Check
while flag == 1:
    item = input('Masukkan NIK Yang Akan Ditampilkan : ')
    # Mencari Key Dalam Dictionary
    found() if item in karyawan else print('Data tidak ditemukan'),line()
    # Check Option
    flag = int(input('apakah anda ingin menampilkan data lain ? \n1.Iya\n2.Tidak\n>>'))
    line()
    if flag != 1:
        break
