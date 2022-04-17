void S12S18_EDM_delta_prime_hist_1000_750-2750MeV_Run-1d_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Apr  8 20:43:31 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__21 = new TH1D("h__21","S12S18",20,0.8595028,1.272279);
   h__21->SetBinContent(8,3);
   h__21->SetBinContent(9,93);
   h__21->SetBinContent(10,357);
   h__21->SetBinContent(11,404);
   h__21->SetBinContent(12,131);
   h__21->SetBinContent(13,10);
   h__21->SetBinContent(14,2);
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
   pt_LaTex = pt->AddText("1.068
#pm0.0006
");
   pt_LaTex = pt->AddText("0.017
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
