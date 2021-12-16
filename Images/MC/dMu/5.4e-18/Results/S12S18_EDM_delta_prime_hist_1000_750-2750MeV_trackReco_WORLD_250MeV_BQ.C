void S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec  7 01:01:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__8 = new TH1D("h__8","",64,1.024805,2.320897);
   h__8->SetBinContent(19,1);
   h__8->SetBinContent(20,1);
   h__8->SetBinContent(21,2);
   h__8->SetBinContent(22,3);
   h__8->SetBinContent(23,9);
   h__8->SetBinContent(24,6);
   h__8->SetBinContent(25,28);
   h__8->SetBinContent(26,31);
   h__8->SetBinContent(27,37);
   h__8->SetBinContent(28,53);
   h__8->SetBinContent(29,62);
   h__8->SetBinContent(30,69);
   h__8->SetBinContent(31,72);
   h__8->SetBinContent(32,78);
   h__8->SetBinContent(33,83);
   h__8->SetBinContent(34,83);
   h__8->SetBinContent(35,87);
   h__8->SetBinContent(36,55);
   h__8->SetBinContent(37,52);
   h__8->SetBinContent(38,46);
   h__8->SetBinContent(39,36);
   h__8->SetBinContent(40,21);
   h__8->SetBinContent(41,26);
   h__8->SetBinContent(42,24);
   h__8->SetBinContent(43,11);
   h__8->SetBinContent(44,6);
   h__8->SetBinContent(45,7);
   h__8->SetBinContent(46,3);
   h__8->SetBinContent(47,2);
   h__8->SetBinContent(48,1);
   h__8->SetBinContent(49,1);
   h__8->SetBinContent(51,1);
   h__8->SetBinContent(53,2);
   h__8->SetBinContent(58,1);
   h__8->SetEntries(1000);
   h__8->SetStats(0);
   h__8->SetLineWidth(3);
   h__8->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__8->GetXaxis()->CenterTitle(true);
   h__8->GetXaxis()->SetLabelFont(42);
   h__8->GetXaxis()->SetTitleSize(0.04);
   h__8->GetXaxis()->SetTitleOffset(1.1);
   h__8->GetXaxis()->SetTitleFont(42);
   h__8->GetYaxis()->SetTitle("Trials");
   h__8->GetYaxis()->CenterTitle(true);
   h__8->GetYaxis()->SetNdivisions(4000510);
   h__8->GetYaxis()->SetLabelFont(42);
   h__8->GetYaxis()->SetTitleSize(0.04);
   h__8->GetYaxis()->SetTitleOffset(1.1);
   h__8->GetYaxis()->SetTitleFont(42);
   h__8->GetZaxis()->SetLabelFont(42);
   h__8->GetZaxis()->SetTitleOffset(1);
   h__8->GetZaxis()->SetTitleFont(42);
   h__8->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.688
#pm0.003
");
   pt_LaTex = pt->AddText("0.1
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
