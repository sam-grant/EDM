void S12S18_EDM_delta_prime_hist_1000_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 19:06:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__21 = new TH1D("h__21","S12S18_",22,0.2748753,0.7336338);
   h__21->SetBinContent(8,3);
   h__21->SetBinContent(9,17);
   h__21->SetBinContent(10,143);
   h__21->SetBinContent(11,269);
   h__21->SetBinContent(12,335);
   h__21->SetBinContent(13,159);
   h__21->SetBinContent(14,58);
   h__21->SetBinContent(15,12);
   h__21->SetBinContent(16,3);
   h__21->SetBinContent(17,1);
   h__21->SetEntries(1000);
   h__21->SetStats(0);
   h__21->SetLineWidth(3);
   h__21->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__21->GetXaxis()->CenterTitle(true);
   h__21->GetXaxis()->SetLabelFont(42);
   h__21->GetXaxis()->SetTitleSize(0.04);
   h__21->GetXaxis()->SetTitleOffset(1.1);
   h__21->GetXaxis()->SetTitleFont(42);
   h__21->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__21->GetYaxis()->CenterTitle(true);
   h__21->GetYaxis()->SetNdivisions(4000510);
   h__21->GetYaxis()->SetLabelFont(42);
   h__21->GetYaxis()->SetTitleSize(0.04);
   h__21->GetYaxis()->SetTitleOffset(1.1);
   h__21->GetYaxis()->SetTitleFont(42);
   h__21->GetZaxis()->SetLabelFont(42);
   h__21->GetZaxis()->SetTitleOffset(1);
   h__21->GetZaxis()->SetTitleFont(42);
   h__21->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   TText *pt_LaTex = pt->AddText("#LT#delta'#GT [mrad]");
   pt_LaTex = pt->AddText("#sigma_{#delta'} [mrad]");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(24);
   pt_LaTex = pt->AddText("0.5084
#pm0.0008
");
   pt_LaTex = pt->AddText("0.025
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
