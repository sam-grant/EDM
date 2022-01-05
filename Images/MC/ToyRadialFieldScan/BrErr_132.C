void BrErr_132()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan  5 17:38:04 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__5 = new TH1D("__5","Number of sub-runs: 132",240,0.4,1.6);
   __5->SetBinContent(49,1);
   __5->SetBinContent(50,1);
   __5->SetBinContent(51,1);
   __5->SetBinContent(52,3);
   __5->SetBinContent(53,10);
   __5->SetBinContent(54,25);
   __5->SetBinContent(55,39);
   __5->SetBinContent(56,60);
   __5->SetBinContent(57,81);
   __5->SetBinContent(58,115);
   __5->SetBinContent(59,94);
   __5->SetBinContent(60,108);
   __5->SetBinContent(61,127);
   __5->SetBinContent(62,98);
   __5->SetBinContent(63,81);
   __5->SetBinContent(64,58);
   __5->SetBinContent(65,36);
   __5->SetBinContent(66,31);
   __5->SetBinContent(67,14);
   __5->SetBinContent(68,9);
   __5->SetBinContent(69,5);
   __5->SetBinContent(70,1);
   __5->SetBinContent(71,1);
   __5->SetBinContent(73,1);
   __5->SetEntries(1000);
   __5->SetStats(0);
   __5->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __5->GetXaxis()->SetRange(3,117);
   __5->GetXaxis()->CenterTitle(true);
   __5->GetXaxis()->SetLabelFont(42);
   __5->GetXaxis()->SetTitleSize(0.04);
   __5->GetXaxis()->SetTitleOffset(1.1);
   __5->GetXaxis()->SetTitleFont(42);
   __5->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __5->GetYaxis()->CenterTitle(true);
   __5->GetYaxis()->SetNdivisions(4000510);
   __5->GetYaxis()->SetLabelFont(42);
   __5->GetYaxis()->SetTitleSize(0.04);
   __5->GetYaxis()->SetTitleOffset(1.1);
   __5->GetYaxis()->SetTitleFont(42);
   __5->GetZaxis()->SetLabelFont(42);
   __5->GetZaxis()->SetTitleOffset(1);
   __5->GetZaxis()->SetTitleFont(42);
   __5->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   TText *pt_LaTex = pt->AddText("Trials");
   pt_LaTex = pt->AddText("Mean [ppm]");
   pt_LaTex = pt->AddText("RMS [ppm]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(23);
   pt_LaTex = pt->AddText("1000");
   pt_LaTex = pt->AddText("0.698
#pm0.0005
");
   pt_LaTex = pt->AddText("0.0168
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
