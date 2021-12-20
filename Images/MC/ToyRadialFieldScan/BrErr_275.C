void BrErr_275()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec 20 14:39:00 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__32 = new TH1D("__32","Number of sub-runs: 275",2000,0,1);
   __32->SetBinContent(381,3);
   __32->SetBinContent(382,11);
   __32->SetBinContent(383,21);
   __32->SetBinContent(384,59);
   __32->SetBinContent(385,119);
   __32->SetBinContent(386,152);
   __32->SetBinContent(387,183);
   __32->SetBinContent(388,178);
   __32->SetBinContent(389,127);
   __32->SetBinContent(390,72);
   __32->SetBinContent(391,36);
   __32->SetBinContent(392,24);
   __32->SetBinContent(393,14);
   __32->SetBinContent(394,1);
   __32->SetEntries(1000);
   __32->SetStats(0);
   __32->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __32->GetXaxis()->SetRange(361,413);
   __32->GetXaxis()->CenterTitle(true);
   __32->GetXaxis()->SetLabelFont(42);
   __32->GetXaxis()->SetTitleSize(0.04);
   __32->GetXaxis()->SetTitleOffset(1.1);
   __32->GetXaxis()->SetTitleFont(42);
   __32->GetYaxis()->SetTitle("Trials");
   __32->GetYaxis()->CenterTitle(true);
   __32->GetYaxis()->SetNdivisions(4000510);
   __32->GetYaxis()->SetLabelFont(42);
   __32->GetYaxis()->SetTitleSize(0.04);
   __32->GetYaxis()->SetTitleOffset(1.1);
   __32->GetYaxis()->SetTitleFont(42);
   __32->GetZaxis()->SetLabelFont(42);
   __32->GetZaxis()->SetTitleOffset(1);
   __32->GetZaxis()->SetTitleFont(42);
   __32->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.2
#pm3e-05
");
   pt_LaTex = pt->AddText("0.0011
#pm2e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
