void S12_g2_delta_prime_hist_1000_750-2750MeV_Run-1c_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 11:44:09 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__4 = new TH1D("h__4","S12",20,-0.17727,0.2228273);
   h__4->SetBinContent(10,323);
   h__4->SetBinContent(11,677);
   h__4->SetEntries(1000);
   h__4->SetStats(0);
   h__4->SetLineWidth(3);
   h__4->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__4->GetXaxis()->CenterTitle(true);
   h__4->GetXaxis()->SetLabelFont(42);
   h__4->GetXaxis()->SetTitleSize(0.04);
   h__4->GetXaxis()->SetTitleOffset(1.1);
   h__4->GetXaxis()->SetTitleFont(42);
   h__4->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__4->GetYaxis()->CenterTitle(true);
   h__4->GetYaxis()->SetNdivisions(4000510);
   h__4->GetYaxis()->SetLabelFont(42);
   h__4->GetYaxis()->SetTitleSize(0.04);
   h__4->GetYaxis()->SetTitleOffset(1.1);
   h__4->GetYaxis()->SetTitleFont(42);
   h__4->GetZaxis()->SetLabelFont(42);
   h__4->GetZaxis()->SetTitleOffset(1);
   h__4->GetZaxis()->SetTitleFont(42);
   h__4->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.023
#pm1e-05
");
   pt_LaTex = pt->AddText("0.00047
#pm1e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
