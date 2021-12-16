void S12_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:52:17 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__54 = new TH1D("h__54","",67,0.9838107,2.333222);
   h__54->SetBinContent(16,1);
   h__54->SetBinContent(19,2);
   h__54->SetBinContent(20,1);
   h__54->SetBinContent(21,4);
   h__54->SetBinContent(22,5);
   h__54->SetBinContent(23,9);
   h__54->SetBinContent(24,11);
   h__54->SetBinContent(25,27);
   h__54->SetBinContent(26,26);
   h__54->SetBinContent(27,34);
   h__54->SetBinContent(28,41);
   h__54->SetBinContent(29,40);
   h__54->SetBinContent(30,52);
   h__54->SetBinContent(31,50);
   h__54->SetBinContent(32,65);
   h__54->SetBinContent(33,48);
   h__54->SetBinContent(34,63);
   h__54->SetBinContent(35,57);
   h__54->SetBinContent(36,67);
   h__54->SetBinContent(37,64);
   h__54->SetBinContent(38,55);
   h__54->SetBinContent(39,43);
   h__54->SetBinContent(40,40);
   h__54->SetBinContent(41,35);
   h__54->SetBinContent(42,31);
   h__54->SetBinContent(43,20);
   h__54->SetBinContent(44,19);
   h__54->SetBinContent(45,17);
   h__54->SetBinContent(46,16);
   h__54->SetBinContent(47,12);
   h__54->SetBinContent(48,14);
   h__54->SetBinContent(49,9);
   h__54->SetBinContent(50,3);
   h__54->SetBinContent(51,3);
   h__54->SetBinContent(52,5);
   h__54->SetBinContent(53,3);
   h__54->SetBinContent(54,2);
   h__54->SetBinContent(55,1);
   h__54->SetBinContent(57,1);
   h__54->SetBinContent(61,1);
   h__54->SetBinContent(64,1);
   h__54->SetBinContent(66,1);
   h__54->SetBinContent(68,1);
   h__54->SetEntries(1000);
   h__54->SetStats(0);
   h__54->SetLineWidth(3);
   h__54->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__54->GetXaxis()->CenterTitle(true);
   h__54->GetXaxis()->SetLabelFont(42);
   h__54->GetXaxis()->SetTitleSize(0.04);
   h__54->GetXaxis()->SetTitleOffset(1.1);
   h__54->GetXaxis()->SetTitleFont(42);
   h__54->GetYaxis()->SetTitle("Trials");
   h__54->GetYaxis()->CenterTitle(true);
   h__54->GetYaxis()->SetNdivisions(4000510);
   h__54->GetYaxis()->SetLabelFont(42);
   h__54->GetYaxis()->SetTitleSize(0.04);
   h__54->GetYaxis()->SetTitleOffset(1.1);
   h__54->GetYaxis()->SetTitleFont(42);
   h__54->GetZaxis()->SetLabelFont(42);
   h__54->GetZaxis()->SetTitleOffset(1);
   h__54->GetZaxis()->SetTitleFont(42);
   h__54->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.682
#pm0.004
");
   pt_LaTex = pt->AddText("0.13
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
