void S12_EDM_delta_prime_hist_1000_825-2375MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:45 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__25 = new TH1D("h__25","S12_",22,-0.5388908,-0.08478377);
   h__25->SetBinContent(8,1);
   h__25->SetBinContent(9,4);
   h__25->SetBinContent(10,67);
   h__25->SetBinContent(11,344);
   h__25->SetBinContent(12,466);
   h__25->SetBinContent(13,116);
   h__25->SetBinContent(14,2);
   h__25->SetEntries(1000);
   h__25->SetStats(0);
   h__25->SetLineWidth(3);
   h__25->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__25->GetXaxis()->CenterTitle(true);
   h__25->GetXaxis()->SetLabelFont(42);
   h__25->GetXaxis()->SetTitleSize(0.04);
   h__25->GetXaxis()->SetTitleOffset(1.1);
   h__25->GetXaxis()->SetTitleFont(42);
   h__25->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__25->GetYaxis()->CenterTitle(true);
   h__25->GetYaxis()->SetNdivisions(4000510);
   h__25->GetYaxis()->SetLabelFont(42);
   h__25->GetYaxis()->SetTitleSize(0.04);
   h__25->GetYaxis()->SetTitleOffset(1.1);
   h__25->GetYaxis()->SetTitleFont(42);
   h__25->GetZaxis()->SetLabelFont(42);
   h__25->GetZaxis()->SetTitleOffset(1);
   h__25->GetZaxis()->SetTitleFont(42);
   h__25->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.3092
#pm0.0005
");
   pt_LaTex = pt->AddText("0.015
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
