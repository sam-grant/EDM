void BrErr_175()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Jun 25 13:30:51 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__20 = new TH1D("__20","Number of sub-runs: 175",240,0.4,1.6);
   __20->SetBinContent(33,1);
   __20->SetBinContent(34,1);
   __20->SetBinContent(35,8);
   __20->SetBinContent(36,13);
   __20->SetBinContent(37,29);
   __20->SetBinContent(38,61);
   __20->SetBinContent(39,101);
   __20->SetBinContent(40,115);
   __20->SetBinContent(41,167);
   __20->SetBinContent(42,143);
   __20->SetBinContent(43,129);
   __20->SetBinContent(44,100);
   __20->SetBinContent(45,57);
   __20->SetBinContent(46,36);
   __20->SetBinContent(47,25);
   __20->SetBinContent(48,6);
   __20->SetBinContent(49,1);
   __20->SetBinContent(50,4);
   __20->SetBinContent(51,2);
   __20->SetBinContent(52,1);
   __20->SetEntries(1000);
   __20->SetStats(0);
   __20->GetXaxis()->SetTitle("Fitted #delta#LTB_{r}^{b}#GT [ppm]");
   __20->GetXaxis()->SetRange(0,87);
   __20->GetXaxis()->CenterTitle(true);
   __20->GetXaxis()->SetLabelFont(42);
   __20->GetXaxis()->SetTitleSize(0.04);
   __20->GetXaxis()->SetTitleOffset(1.1);
   __20->GetXaxis()->SetTitleFont(42);
   __20->GetYaxis()->SetTitle("Trials / 0.005
 ppm");
   __20->GetYaxis()->CenterTitle(true);
   __20->GetYaxis()->SetNdivisions(4000510);
   __20->GetYaxis()->SetLabelFont(42);
   __20->GetYaxis()->SetTitleSize(0.04);
   __20->GetYaxis()->SetTitleOffset(1.1);
   __20->GetYaxis()->SetTitleFont(42);
   __20->GetZaxis()->SetLabelFont(42);
   __20->GetZaxis()->SetTitleOffset(1);
   __20->GetZaxis()->SetTitleFont(42);
   __20->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.606
#pm0.0004
");
   pt_LaTex = pt->AddText("0.0134
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
