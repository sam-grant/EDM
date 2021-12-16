void S18_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:52:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__55 = new TH1D("h__55","",70,0.92516,2.328222);
   h__55->SetBinContent(17,1);
   h__55->SetBinContent(20,1);
   h__55->SetBinContent(21,1);
   h__55->SetBinContent(22,4);
   h__55->SetBinContent(23,1);
   h__55->SetBinContent(24,9);
   h__55->SetBinContent(25,10);
   h__55->SetBinContent(26,13);
   h__55->SetBinContent(27,26);
   h__55->SetBinContent(28,22);
   h__55->SetBinContent(29,27);
   h__55->SetBinContent(30,41);
   h__55->SetBinContent(31,38);
   h__55->SetBinContent(32,54);
   h__55->SetBinContent(33,41);
   h__55->SetBinContent(34,53);
   h__55->SetBinContent(35,55);
   h__55->SetBinContent(36,49);
   h__55->SetBinContent(37,54);
   h__55->SetBinContent(38,47);
   h__55->SetBinContent(39,63);
   h__55->SetBinContent(40,46);
   h__55->SetBinContent(41,46);
   h__55->SetBinContent(42,50);
   h__55->SetBinContent(43,40);
   h__55->SetBinContent(44,19);
   h__55->SetBinContent(45,32);
   h__55->SetBinContent(46,30);
   h__55->SetBinContent(47,21);
   h__55->SetBinContent(48,20);
   h__55->SetBinContent(49,15);
   h__55->SetBinContent(50,15);
   h__55->SetBinContent(51,12);
   h__55->SetBinContent(52,11);
   h__55->SetBinContent(53,7);
   h__55->SetBinContent(54,4);
   h__55->SetBinContent(55,5);
   h__55->SetBinContent(56,5);
   h__55->SetBinContent(57,1);
   h__55->SetBinContent(58,2);
   h__55->SetBinContent(59,1);
   h__55->SetBinContent(60,1);
   h__55->SetBinContent(62,2);
   h__55->SetBinContent(65,1);
   h__55->SetBinContent(68,3);
   h__55->SetBinContent(71,1);
   h__55->SetEntries(1000);
   h__55->SetStats(0);
   h__55->SetLineWidth(3);
   h__55->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__55->GetXaxis()->CenterTitle(true);
   h__55->GetXaxis()->SetLabelFont(42);
   h__55->GetXaxis()->SetTitleSize(0.04);
   h__55->GetXaxis()->SetTitleOffset(1.1);
   h__55->GetXaxis()->SetTitleFont(42);
   h__55->GetYaxis()->SetTitle("Trials");
   h__55->GetYaxis()->CenterTitle(true);
   h__55->GetYaxis()->SetNdivisions(4000510);
   h__55->GetYaxis()->SetLabelFont(42);
   h__55->GetYaxis()->SetTitleSize(0.04);
   h__55->GetYaxis()->SetTitleOffset(1.1);
   h__55->GetYaxis()->SetTitleFont(42);
   h__55->GetZaxis()->SetLabelFont(42);
   h__55->GetZaxis()->SetTitleOffset(1);
   h__55->GetZaxis()->SetTitleFont(42);
   h__55->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.676
#pm0.005
");
   pt_LaTex = pt->AddText("0.15
#pm0.003
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
