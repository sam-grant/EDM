void S12_EDM_delta_prime_hist_1000_1025-2125MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:39:34 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__13 = new TH1D("h__13","S12_",20,-0.2632752,0.1471485);
   h__13->SetBinContent(10,190);
   h__13->SetBinContent(11,799);
   h__13->SetBinContent(12,11);
   h__13->SetEntries(1000);
   h__13->SetStats(0);
   h__13->SetLineWidth(3);
   h__13->GetXaxis()->SetTitle("#delta'_{c}^{} [mrad]");
   h__13->GetXaxis()->CenterTitle(true);
   h__13->GetXaxis()->SetLabelFont(42);
   h__13->GetXaxis()->SetTitleSize(0.04);
   h__13->GetXaxis()->SetTitleOffset(1.1);
   h__13->GetXaxis()->SetTitleFont(42);
   h__13->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__13->GetYaxis()->CenterTitle(true);
   h__13->GetYaxis()->SetNdivisions(4000510);
   h__13->GetYaxis()->SetLabelFont(42);
   h__13->GetYaxis()->SetTitleSize(0.04);
   h__13->GetYaxis()->SetTitleOffset(1.1);
   h__13->GetYaxis()->SetTitleFont(42);
   h__13->GetZaxis()->SetLabelFont(42);
   h__13->GetZaxis()->SetTitleOffset(1);
   h__13->GetZaxis()->SetTitleFont(42);
   h__13->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.05213
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0067
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
