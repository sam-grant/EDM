void S12S18_EDM_delta_prime_hist_1000_1025-2125MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov  9 13:39:35 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__15 = new TH1D("h__15","S12S18_",20,-0.3075711,0.1073565);
   h__15->SetBinContent(10,265);
   h__15->SetBinContent(11,735);
   h__15->SetEntries(1000);
   h__15->SetStats(0);
   h__15->SetLineWidth(3);
   h__15->GetXaxis()->SetTitle("#delta'_{c}^{} [mrad]");
   h__15->GetXaxis()->CenterTitle(true);
   h__15->GetXaxis()->SetLabelFont(42);
   h__15->GetXaxis()->SetTitleSize(0.04);
   h__15->GetXaxis()->SetTitleOffset(1.1);
   h__15->GetXaxis()->SetTitleFont(42);
   h__15->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__15->GetYaxis()->CenterTitle(true);
   h__15->GetYaxis()->SetNdivisions(4000510);
   h__15->GetYaxis()->SetLabelFont(42);
   h__15->GetYaxis()->SetTitleSize(0.04);
   h__15->GetYaxis()->SetTitleOffset(1.1);
   h__15->GetYaxis()->SetTitleFont(42);
   h__15->GetZaxis()->SetLabelFont(42);
   h__15->GetZaxis()->SetTitleOffset(1);
   h__15->GetZaxis()->SetTitleFont(42);
   h__15->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.0967
#pm0.0002
");
   pt_LaTex = pt->AddText("0.0059
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
