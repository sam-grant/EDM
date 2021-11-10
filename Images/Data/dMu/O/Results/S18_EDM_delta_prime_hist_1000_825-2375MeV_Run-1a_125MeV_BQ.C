void S18_EDM_delta_prime_hist_1000_825-2375MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__26 = new TH1D("h__26","S18_",23,-0.4635273,0.01091576);
   h__26->SetBinContent(8,7);
   h__26->SetBinContent(9,49);
   h__26->SetBinContent(10,197);
   h__26->SetBinContent(11,346);
   h__26->SetBinContent(12,279);
   h__26->SetBinContent(13,111);
   h__26->SetBinContent(14,11);
   h__26->SetEntries(1000);
   h__26->SetStats(0);
   h__26->SetLineWidth(3);
   h__26->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__26->GetXaxis()->CenterTitle(true);
   h__26->GetXaxis()->SetLabelFont(42);
   h__26->GetXaxis()->SetTitleSize(0.04);
   h__26->GetXaxis()->SetTitleOffset(1.1);
   h__26->GetXaxis()->SetTitleFont(42);
   h__26->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__26->GetYaxis()->CenterTitle(true);
   h__26->GetYaxis()->SetNdivisions(4000510);
   h__26->GetYaxis()->SetLabelFont(42);
   h__26->GetYaxis()->SetTitleSize(0.04);
   h__26->GetYaxis()->SetTitleOffset(1.1);
   h__26->GetYaxis()->SetTitleFont(42);
   h__26->GetZaxis()->SetLabelFont(42);
   h__26->GetZaxis()->SetTitleOffset(1);
   h__26->GetZaxis()->SetTitleFont(42);
   h__26->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.2424
#pm0.0007
");
   pt_LaTex = pt->AddText("0.022
#pm0.0005
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
