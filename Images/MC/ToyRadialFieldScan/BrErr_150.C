void BrErr_150()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:38:54 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__17 = new TH1D("__17","Number of sub-runs: 150",2000,0,1);
   __17->SetBinContent(510,1);
   __17->SetBinContent(511,1);
   __17->SetBinContent(512,1);
   __17->SetBinContent(514,1);
   __17->SetBinContent(515,11);
   __17->SetBinContent(516,4);
   __17->SetBinContent(517,13);
   __17->SetBinContent(518,16);
   __17->SetBinContent(519,44);
   __17->SetBinContent(520,29);
   __17->SetBinContent(521,55);
   __17->SetBinContent(522,75);
   __17->SetBinContent(523,92);
   __17->SetBinContent(524,68);
   __17->SetBinContent(525,81);
   __17->SetBinContent(526,90);
   __17->SetBinContent(527,84);
   __17->SetBinContent(528,90);
   __17->SetBinContent(529,57);
   __17->SetBinContent(530,51);
   __17->SetBinContent(531,46);
   __17->SetBinContent(532,25);
   __17->SetBinContent(533,22);
   __17->SetBinContent(534,22);
   __17->SetBinContent(535,12);
   __17->SetBinContent(536,2);
   __17->SetBinContent(537,3);
   __17->SetBinContent(538,3);
   __17->SetBinContent(540,1);
   __17->SetEntries(1000);
   __17->SetStats(0);
   __17->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __17->GetXaxis()->SetRange(472,579);
   __17->GetXaxis()->CenterTitle(true);
   __17->GetXaxis()->SetLabelFont(42);
   __17->GetXaxis()->SetTitleSize(0.04);
   __17->GetXaxis()->SetTitleOffset(1.1);
   __17->GetXaxis()->SetTitleFont(42);
   __17->GetYaxis()->SetTitle("Trials");
   __17->GetYaxis()->CenterTitle(true);
   __17->GetYaxis()->SetNdivisions(4000510);
   __17->GetYaxis()->SetLabelFont(42);
   __17->GetYaxis()->SetTitleSize(0.04);
   __17->GetYaxis()->SetTitleOffset(1.1);
   __17->GetYaxis()->SetTitleFont(42);
   __17->GetZaxis()->SetLabelFont(42);
   __17->GetZaxis()->SetTitleOffset(1);
   __17->GetZaxis()->SetTitleFont(42);
   __17->Draw("HIST");
   
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
#pm7e-05
");
   pt_LaTex = pt->AddText("0.00223
#pm5e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
