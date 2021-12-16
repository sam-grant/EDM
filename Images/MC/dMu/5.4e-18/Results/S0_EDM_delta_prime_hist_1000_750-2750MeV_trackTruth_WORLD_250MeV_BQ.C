void S0_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:51:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__53 = new TH1D("h__53","",63,1.012354,2.291355);
   h__53->SetBinContent(16,1);
   h__53->SetBinContent(18,1);
   h__53->SetBinContent(19,1);
   h__53->SetBinContent(20,2);
   h__53->SetBinContent(21,3);
   h__53->SetBinContent(22,5);
   h__53->SetBinContent(23,14);
   h__53->SetBinContent(24,16);
   h__53->SetBinContent(25,29);
   h__53->SetBinContent(26,37);
   h__53->SetBinContent(27,40);
   h__53->SetBinContent(28,50);
   h__53->SetBinContent(29,51);
   h__53->SetBinContent(30,56);
   h__53->SetBinContent(31,61);
   h__53->SetBinContent(32,64);
   h__53->SetBinContent(33,72);
   h__53->SetBinContent(34,70);
   h__53->SetBinContent(35,76);
   h__53->SetBinContent(36,58);
   h__53->SetBinContent(37,50);
   h__53->SetBinContent(38,61);
   h__53->SetBinContent(39,34);
   h__53->SetBinContent(40,26);
   h__53->SetBinContent(41,24);
   h__53->SetBinContent(42,21);
   h__53->SetBinContent(43,16);
   h__53->SetBinContent(44,17);
   h__53->SetBinContent(45,13);
   h__53->SetBinContent(46,6);
   h__53->SetBinContent(47,5);
   h__53->SetBinContent(48,6);
   h__53->SetBinContent(49,5);
   h__53->SetBinContent(50,3);
   h__53->SetBinContent(51,1);
   h__53->SetBinContent(52,1);
   h__53->SetBinContent(55,1);
   h__53->SetBinContent(59,1);
   h__53->SetBinContent(60,1);
   h__53->SetBinContent(61,1);
   h__53->SetEntries(1000);
   h__53->SetStats(0);
   h__53->SetLineWidth(3);
   h__53->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__53->GetXaxis()->CenterTitle(true);
   h__53->GetXaxis()->SetLabelFont(42);
   h__53->GetXaxis()->SetTitleSize(0.04);
   h__53->GetXaxis()->SetTitleOffset(1.1);
   h__53->GetXaxis()->SetTitleFont(42);
   h__53->GetYaxis()->SetTitle("Trials");
   h__53->GetYaxis()->CenterTitle(true);
   h__53->GetYaxis()->SetNdivisions(4000510);
   h__53->GetYaxis()->SetLabelFont(42);
   h__53->GetYaxis()->SetTitleSize(0.04);
   h__53->GetYaxis()->SetTitleOffset(1.1);
   h__53->GetYaxis()->SetTitleFont(42);
   h__53->GetZaxis()->SetLabelFont(42);
   h__53->GetZaxis()->SetTitleOffset(1);
   h__53->GetZaxis()->SetTitleFont(42);
   h__53->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.686
#pm0.004
");
   pt_LaTex = pt->AddText("0.12
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
