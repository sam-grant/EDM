void S18_g2_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:55:35 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__60 = new TH1D("h__60","",55,-0.2098506,0.8996557);
   h__60->SetBinContent(19,1);
   h__60->SetBinContent(20,5);
   h__60->SetBinContent(21,14);
   h__60->SetBinContent(22,35);
   h__60->SetBinContent(23,90);
   h__60->SetBinContent(24,123);
   h__60->SetBinContent(25,157);
   h__60->SetBinContent(26,176);
   h__60->SetBinContent(27,153);
   h__60->SetBinContent(28,110);
   h__60->SetBinContent(29,51);
   h__60->SetBinContent(30,45);
   h__60->SetBinContent(31,21);
   h__60->SetBinContent(32,14);
   h__60->SetBinContent(33,2);
   h__60->SetBinContent(34,1);
   h__60->SetBinContent(35,1);
   h__60->SetBinContent(37,1);
   h__60->SetEntries(1000);
   h__60->SetStats(0);
   h__60->SetLineWidth(3);
   h__60->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__60->GetXaxis()->CenterTitle(true);
   h__60->GetXaxis()->SetLabelFont(42);
   h__60->GetXaxis()->SetTitleSize(0.04);
   h__60->GetXaxis()->SetTitleOffset(1.1);
   h__60->GetXaxis()->SetTitleFont(42);
   h__60->GetYaxis()->SetTitle("Trials");
   h__60->GetYaxis()->CenterTitle(true);
   h__60->GetYaxis()->SetNdivisions(4000510);
   h__60->GetYaxis()->SetLabelFont(42);
   h__60->GetYaxis()->SetTitleSize(0.04);
   h__60->GetYaxis()->SetTitleOffset(1.1);
   h__60->GetYaxis()->SetTitleFont(42);
   h__60->GetZaxis()->SetLabelFont(42);
   h__60->GetZaxis()->SetTitleOffset(1);
   h__60->GetZaxis()->SetTitleFont(42);
   h__60->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.3047
#pm0.002
");
   pt_LaTex = pt->AddText("0.048
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
