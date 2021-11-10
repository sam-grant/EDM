void S12S18_EDM_delta_prime_hist_1000_900-2250MeV_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Nov  8 21:07:44 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__15 = new TH1D("h__15","S12S18_",23,0.3473461,0.8150987);
   h__15->SetBinContent(8,2);
   h__15->SetBinContent(9,8);
   h__15->SetBinContent(10,62);
   h__15->SetBinContent(11,176);
   h__15->SetBinContent(12,270);
   h__15->SetBinContent(13,282);
   h__15->SetBinContent(14,120);
   h__15->SetBinContent(15,57);
   h__15->SetBinContent(16,19);
   h__15->SetBinContent(17,1);
   h__15->SetBinContent(18,3);
   h__15->SetEntries(1000);
   h__15->SetStats(0);
   h__15->SetLineWidth(3);
   h__15->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
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
   pt_LaTex = pt->AddText("0.5907
#pm0.0009
");
   pt_LaTex = pt->AddText("0.028
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
