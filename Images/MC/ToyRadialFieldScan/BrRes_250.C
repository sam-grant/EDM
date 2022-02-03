void BrRes_250()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jan 10 15:42:34 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *__30 = new TH1D("__30","Number of sub-runs: 250",240,-11,11);
   __30->SetBinContent(111,1);
   __30->SetBinContent(112,3);
   __30->SetBinContent(113,3);
   __30->SetBinContent(114,6);
   __30->SetBinContent(115,17);
   __30->SetBinContent(116,37);
   __30->SetBinContent(117,63);
   __30->SetBinContent(118,107);
   __30->SetBinContent(119,113);
   __30->SetBinContent(120,157);
   __30->SetBinContent(121,156);
   __30->SetBinContent(122,120);
   __30->SetBinContent(123,86);
   __30->SetBinContent(124,78);
   __30->SetBinContent(125,29);
   __30->SetBinContent(126,13);
   __30->SetBinContent(127,5);
   __30->SetBinContent(128,3);
   __30->SetBinContent(129,2);
   __30->SetBinContent(130,1);
   __30->SetEntries(1000);
   __30->SetStats(0);
   __30->GetXaxis()->SetTitle("#LTB_{r}^{b}#GT truth residual [ppm]");
   __30->GetXaxis()->SetRange(75,166);
   __30->GetXaxis()->CenterTitle(true);
   __30->GetXaxis()->SetLabelFont(42);
   __30->GetXaxis()->SetTitleSize(0.04);
   __30->GetXaxis()->SetTitleOffset(1.1);
   __30->GetXaxis()->SetTitleFont(42);
   __30->GetYaxis()->SetTitle("Trials / 0.09
 ppm");
   __30->GetYaxis()->CenterTitle(true);
   __30->GetYaxis()->SetNdivisions(4000510);
   __30->GetYaxis()->SetLabelFont(42);
   __30->GetYaxis()->SetTitleSize(0.04);
   __30->GetYaxis()->SetTitleOffset(1.1);
   __30->GetYaxis()->SetTitleFont(42);
   __30->GetZaxis()->SetLabelFont(42);
   __30->GetZaxis()->SetTitleOffset(1);
   __30->GetZaxis()->SetTitleFont(42);
   __30->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.00578
#pm0.008
");
   pt_LaTex = pt->AddText("0.245
#pm0.005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
