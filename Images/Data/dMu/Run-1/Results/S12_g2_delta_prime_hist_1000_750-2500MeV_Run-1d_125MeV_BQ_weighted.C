void S12_g2_delta_prime_hist_1000_750-2500MeV_Run-1d_125MeV_BQ_weighted()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov 22 17:32:56 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__22 = new TH1D("h__22","S12_",21,-0.1633276,0.2625271);
   h__22->SetBinContent(10,17);
   h__22->SetBinContent(11,580);
   h__22->SetBinContent(12,399);
   h__22->SetBinContent(13,4);
   h__22->SetEntries(1000);
   h__22->SetStats(0);
   h__22->SetLineWidth(3);
   h__22->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__22->GetXaxis()->CenterTitle(true);
   h__22->GetXaxis()->SetLabelFont(42);
   h__22->GetXaxis()->SetTitleSize(0.04);
   h__22->GetXaxis()->SetTitleOffset(1.1);
   h__22->GetXaxis()->SetTitleFont(42);
   h__22->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__22->GetYaxis()->CenterTitle(true);
   h__22->GetYaxis()->SetNdivisions(4000510);
   h__22->GetYaxis()->SetLabelFont(42);
   h__22->GetYaxis()->SetTitleSize(0.04);
   h__22->GetYaxis()->SetTitleOffset(1.1);
   h__22->GetYaxis()->SetTitleFont(42);
   h__22->GetZaxis()->SetLabelFont(42);
   h__22->GetZaxis()->SetTitleOffset(1);
   h__22->GetZaxis()->SetTitleFont(42);
   h__22->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.05767
#pm0.0003
");
   pt_LaTex = pt->AddText("0.0091
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
