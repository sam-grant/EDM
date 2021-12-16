void S0S12S18_g2_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:41:30 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__22 = new TH1D("h__22","",999,-0.5204822,19.47707);
   h__22->SetBinContent(0,147);
   h__22->SetBinContent(1,5);
   h__22->SetBinContent(2,8);
   h__22->SetBinContent(3,8);
   h__22->SetBinContent(4,14);
   h__22->SetBinContent(5,11);
   h__22->SetBinContent(6,17);
   h__22->SetBinContent(7,26);
   h__22->SetBinContent(8,20);
   h__22->SetBinContent(9,19);
   h__22->SetBinContent(10,37);
   h__22->SetBinContent(11,31);
   h__22->SetBinContent(12,47);
   h__22->SetBinContent(13,36);
   h__22->SetBinContent(14,48);
   h__22->SetBinContent(15,70);
   h__22->SetBinContent(16,55);
   h__22->SetBinContent(17,62);
   h__22->SetBinContent(18,66);
   h__22->SetBinContent(19,56);
   h__22->SetBinContent(20,48);
   h__22->SetBinContent(21,39);
   h__22->SetBinContent(22,30);
   h__22->SetBinContent(23,19);
   h__22->SetBinContent(24,14);
   h__22->SetBinContent(25,6);
   h__22->SetBinContent(26,3);
   h__22->SetBinContent(27,4);
   h__22->SetBinContent(28,1);
   h__22->SetBinContent(108,1);
   h__22->SetBinContent(118,1);
   h__22->SetBinContent(123,1);
   h__22->SetBinContent(149,1);
   h__22->SetBinContent(151,1);
   h__22->SetBinContent(163,1);
   h__22->SetBinContent(171,1);
   h__22->SetBinContent(186,1);
   h__22->SetBinContent(210,1);
   h__22->SetBinContent(231,1);
   h__22->SetBinContent(234,1);
   h__22->SetBinContent(245,1);
   h__22->SetBinContent(248,1);
   h__22->SetBinContent(249,1);
   h__22->SetBinContent(261,1);
   h__22->SetBinContent(262,1);
   h__22->SetBinContent(279,1);
   h__22->SetBinContent(306,1);
   h__22->SetBinContent(308,1);
   h__22->SetBinContent(316,1);
   h__22->SetBinContent(330,1);
   h__22->SetBinContent(344,1);
   h__22->SetBinContent(369,1);
   h__22->SetBinContent(371,1);
   h__22->SetBinContent(375,1);
   h__22->SetBinContent(385,1);
   h__22->SetBinContent(451,1);
   h__22->SetBinContent(491,1);
   h__22->SetBinContent(497,1);
   h__22->SetBinContent(500,1);
   h__22->SetBinContent(501,1);
   h__22->SetBinContent(528,1);
   h__22->SetBinContent(533,1);
   h__22->SetBinContent(550,1);
   h__22->SetBinContent(578,1);
   h__22->SetBinContent(592,1);
   h__22->SetBinContent(687,1);
   h__22->SetBinContent(807,1);
   h__22->SetBinContent(886,1);
   h__22->SetBinContent(975,1);
   h__22->SetBinContent(1000,13);
   h__22->SetEntries(1000);
   h__22->SetStats(0);
   h__22->SetLineWidth(3);
   h__22->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__22->GetXaxis()->CenterTitle(true);
   h__22->GetXaxis()->SetLabelFont(42);
   h__22->GetXaxis()->SetTitleSize(0.04);
   h__22->GetXaxis()->SetTitleOffset(1.1);
   h__22->GetXaxis()->SetTitleFont(42);
   h__22->GetYaxis()->SetTitle("Trials");
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
   pt_LaTex = pt->AddText("0.1145
#pm0.06
");
   pt_LaTex = pt->AddText("1.8
#pm0.04
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
