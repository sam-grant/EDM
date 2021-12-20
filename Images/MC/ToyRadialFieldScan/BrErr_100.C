void BrErr_100()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__11 = new TH1D("__11","Number of sub-runs: 100",2000,0,1);
   __11->SetBinContent(624,1);
   __11->SetBinContent(626,1);
   __11->SetBinContent(628,1);
   __11->SetBinContent(629,1);
   __11->SetBinContent(630,4);
   __11->SetBinContent(631,3);
   __11->SetBinContent(632,11);
   __11->SetBinContent(633,6);
   __11->SetBinContent(634,9);
   __11->SetBinContent(635,10);
   __11->SetBinContent(636,18);
   __11->SetBinContent(637,22);
   __11->SetBinContent(638,31);
   __11->SetBinContent(639,35);
   __11->SetBinContent(640,29);
   __11->SetBinContent(641,54);
   __11->SetBinContent(642,63);
   __11->SetBinContent(643,60);
   __11->SetBinContent(644,72);
   __11->SetBinContent(645,60);
   __11->SetBinContent(646,71);
   __11->SetBinContent(647,52);
   __11->SetBinContent(648,66);
   __11->SetBinContent(649,45);
   __11->SetBinContent(650,59);
   __11->SetBinContent(651,37);
   __11->SetBinContent(652,43);
   __11->SetBinContent(653,29);
   __11->SetBinContent(654,19);
   __11->SetBinContent(655,23);
   __11->SetBinContent(656,13);
   __11->SetBinContent(657,14);
   __11->SetBinContent(658,9);
   __11->SetBinContent(659,13);
   __11->SetBinContent(660,4);
   __11->SetBinContent(661,5);
   __11->SetBinContent(663,3);
   __11->SetBinContent(664,2);
   __11->SetBinContent(665,1);
   __11->SetBinContent(668,1);
   __11->SetEntries(1000);
   __11->SetStats(0);
   __11->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __11->GetXaxis()->SetRange(570,721);
   __11->GetXaxis()->CenterTitle(true);
   __11->GetXaxis()->SetLabelFont(42);
   __11->GetXaxis()->SetTitleSize(0.04);
   __11->GetXaxis()->SetTitleOffset(1.1);
   __11->GetXaxis()->SetTitleFont(42);
   __11->GetYaxis()->SetTitle("Trials");
   __11->GetYaxis()->CenterTitle(true);
   __11->GetYaxis()->SetNdivisions(4000510);
   __11->GetYaxis()->SetLabelFont(42);
   __11->GetYaxis()->SetTitleSize(0.04);
   __11->GetYaxis()->SetTitleOffset(1.1);
   __11->GetYaxis()->SetTitleFont(42);
   __11->GetZaxis()->SetLabelFont(42);
   __11->GetZaxis()->SetTitleOffset(1);
   __11->GetZaxis()->SetTitleFont(42);
   __11->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("0.3
#pm0.0001
");
   pt_LaTex = pt->AddText("0.00315
#pm7e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
