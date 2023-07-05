#include <iostream>
using namespace std;
class MataKuliah {
private:
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;
public:
	MataKuliah() {
		presensi = 0;
		activity = 0;
		exercise = 0;
		tugasAkhir = 0;
	}
	virtual float hitungNilaiAkhir() { return 0; }
	virtual void cekKelulusan() { return; }
	virtual void input() { return; }
	void setPresensi(float nilai) {
		this->presensi = nilai;
	}
	float getPresensi() {
		return presensi;
	}
	float getActivity() {
		return activity;
	}
	float getExercise() {
		return exercise;
	}
	float getTugasAkhir() {
		return tugasAkhir;
	}
};

class Pemrograman : public MataKuliah {
public:
	void input() {
		cout << " Program dibuat" << endl;
		cout << " Masukkan nilai Presensi: ";
		cout << " Masukkan nilai Activity: ";
		cout << " Masukkan nilai Exercise: ";
		cout << " Masukkan nilai Tugas Akhir: ";
	}

	string status(float presensi, float activity, float exercise, float tugasAkhir) {
		if (presensi >= 75 || activity >= 75 || exercise >= 75 || tugasAkhir >= 75) {
			return "lulus";
		}
		else {
			return "gagal ";
		}
	}
};

int main() {
	float presensi;
	float activity;
	float exercise;
	float tugasAkhir;

	cout << " Program dibuat" << endl;
	cout << " Masukkan nilai Presensi: ";
	cin >> presensi;
	cout << " Masukkan nilai Activity: ";
	cin >> activity;
	cout << " Masukkan nilai Exercise: ";
	cin >> exercise;
	cout << " Masukkan nilai Tugas Akhir: ";
	cin >> tugasAkhir;

	cout << "Nilai rata-rata nya : " << (presensi, activity, exercise, tugasAkhir);
}



