void S18_g2_delta_prime_hist_1000_750-2500MeV_Run-1d_125MeV_BQ_weighted()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 23 11:03:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__23 = new TH1D("h__23","S18_",20,-0.240958,0.1719401);
   h__23->SetBinContent(10,59);
   h__23->SetBinContent(11,939);
   h__23->SetBinContent(12,2);
   h__23->SetEntries(1000);
   h__23->SetStats(0);
   h__23->SetLineWidth(3);
   h__23->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__23->GetXaxis()->CenterTitle(true);
   h__23->GetXaxis()->SetLabelFont(42);
   h__23->GetXaxis()->SetTitleSize(0.04);
   h__23->GetXaxis()->SetTitleOffset(1.1);
   h__23->GetXaxis()->SetTitleFont(42);
   h__23->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__23->GetYaxis()->CenterTitle(true);
   h__23->GetYaxis()->SetNdivisions(4000510);
   h__23->GetYaxis()->SetLabelFont(42);
   h__23->GetYaxis()->SetTitleSize(0.04);
   h__23->GetYaxis()->SetTitleOffset(1.1);
   h__23->GetYaxis()->SetTitleFont(42);
   h__23->GetZaxis()->SetLabelFont(42);
   h__23->GetZaxis()->SetTitleOffset(1);
   h__23->GetZaxis()->SetTitleFont(42);
   h__23->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.02687
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0048
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
