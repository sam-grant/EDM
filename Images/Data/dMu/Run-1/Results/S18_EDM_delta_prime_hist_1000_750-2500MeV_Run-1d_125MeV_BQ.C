void S18_EDM_delta_prime_hist_1000_750-2500MeV_Run-1d_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 09:29:19 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__20 = new TH1D("h__20","S18_",22,0.2639088,0.718208);
   h__20->SetBinContent(8,3);
   h__20->SetBinContent(9,34);
   h__20->SetBinContent(10,161);
   h__20->SetBinContent(11,296);
   h__20->SetBinContent(12,295);
   h__20->SetBinContent(13,144);
   h__20->SetBinContent(14,52);
   h__20->SetBinContent(15,12);
   h__20->SetBinContent(16,2);
   h__20->SetBinContent(17,1);
   h__20->SetEntries(1000);
   h__20->SetStats(0);
   h__20->SetLineWidth(3);
   h__20->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__20->GetXaxis()->CenterTitle(true);
   h__20->GetXaxis()->SetLabelFont(42);
   h__20->GetXaxis()->SetTitleSize(0.04);
   h__20->GetXaxis()->SetTitleOffset(1.1);
   h__20->GetXaxis()->SetTitleFont(42);
   h__20->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__20->GetYaxis()->CenterTitle(true);
   h__20->GetYaxis()->SetNdivisions(4000510);
   h__20->GetYaxis()->SetLabelFont(42);
   h__20->GetYaxis()->SetTitleSize(0.04);
   h__20->GetYaxis()->SetTitleOffset(1.1);
   h__20->GetYaxis()->SetTitleFont(42);
   h__20->GetZaxis()->SetLabelFont(42);
   h__20->GetZaxis()->SetTitleOffset(1);
   h__20->GetZaxis()->SetTitleFont(42);
   h__20->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.4925
#pm0.0008
");
   pt_LaTex = pt->AddText("0.026
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
