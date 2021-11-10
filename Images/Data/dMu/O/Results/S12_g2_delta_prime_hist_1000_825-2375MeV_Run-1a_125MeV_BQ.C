void S12_g2_delta_prime_hist_1000_825-2375MeV_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:03:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__28 = new TH1D("h__28","S12_",21,0.03048629,0.4518699);
   h__28->SetBinContent(9,1);
   h__28->SetBinContent(10,9);
   h__28->SetBinContent(11,156);
   h__28->SetBinContent(12,516);
   h__28->SetBinContent(13,255);
   h__28->SetBinContent(14,56);
   h__28->SetBinContent(15,7);
   h__28->SetEntries(1000);
   h__28->SetStats(0);
   h__28->SetLineWidth(3);
   h__28->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__28->GetXaxis()->CenterTitle(true);
   h__28->GetXaxis()->SetLabelFont(42);
   h__28->GetXaxis()->SetTitleSize(0.04);
   h__28->GetXaxis()->SetTitleOffset(1.1);
   h__28->GetXaxis()->SetTitleFont(42);
   h__28->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__28->GetYaxis()->CenterTitle(true);
   h__28->GetYaxis()->SetNdivisions(4000510);
   h__28->GetYaxis()->SetLabelFont(42);
   h__28->GetYaxis()->SetTitleSize(0.04);
   h__28->GetYaxis()->SetTitleOffset(1.1);
   h__28->GetYaxis()->SetTitleFont(42);
   h__28->GetZaxis()->SetLabelFont(42);
   h__28->GetZaxis()->SetTitleOffset(1);
   h__28->GetZaxis()->SetTitleFont(42);
   h__28->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.2654
#pm0.0005
");
   pt_LaTex = pt->AddText("0.016
#pm0.0003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
