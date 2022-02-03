void BrRes_150()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:26 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__18 = new TH1D("__18","Number of sub-runs: 150",240,-11,11);
   __18->SetBinContent(110,4);
   __18->SetBinContent(111,3);
   __18->SetBinContent(112,5);
   __18->SetBinContent(113,12);
   __18->SetBinContent(114,17);
   __18->SetBinContent(115,35);
   __18->SetBinContent(116,52);
   __18->SetBinContent(117,72);
   __18->SetBinContent(118,88);
   __18->SetBinContent(119,96);
   __18->SetBinContent(120,113);
   __18->SetBinContent(121,126);
   __18->SetBinContent(122,106);
   __18->SetBinContent(123,91);
   __18->SetBinContent(124,62);
   __18->SetBinContent(125,53);
   __18->SetBinContent(126,26);
   __18->SetBinContent(127,17);
   __18->SetBinContent(128,13);
   __18->SetBinContent(129,5);
   __18->SetBinContent(130,3);
   __18->SetBinContent(131,1);
   __18->SetEntries(1000);
   __18->SetStats(0);
   __18->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __18->GetXaxis()->SetRange(62,179);
   __18->GetXaxis()->CenterTitle(true);
   __18->GetXaxis()->SetLabelFont(42);
   __18->GetXaxis()->SetTitleSize(0.04);
   __18->GetXaxis()->SetTitleOffset(1.1);
   __18->GetXaxis()->SetTitleFont(42);
   __18->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __18->GetYaxis()->CenterTitle(true);
   __18->GetYaxis()->SetNdivisions(4000510);
   __18->GetYaxis()->SetLabelFont(42);
   __18->GetYaxis()->SetTitleSize(0.04);
   __18->GetYaxis()->SetTitleOffset(1.1);
   __18->GetYaxis()->SetTitleFont(42);
   __18->GetZaxis()->SetLabelFont(42);
   __18->GetZaxis()->SetTitleOffset(1);
   __18->GetZaxis()->SetTitleFont(42);
   __18->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.00688
#pm0.01
");
   pt_LaTex = pt->AddText("0.316
#pm0.007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
