void S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:14 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__26 = new TH1D("h__26","",65,1.042643,2.357448);
   h__26->SetBinContent(19,1);
   h__26->SetBinContent(23,1);
   h__26->SetBinContent(24,4);
   h__26->SetBinContent(25,9);
   h__26->SetBinContent(26,9);
   h__26->SetBinContent(27,19);
   h__26->SetBinContent(28,45);
   h__26->SetBinContent(29,56);
   h__26->SetBinContent(30,74);
   h__26->SetBinContent(31,75);
   h__26->SetBinContent(32,102);
   h__26->SetBinContent(33,97);
   h__26->SetBinContent(34,102);
   h__26->SetBinContent(35,80);
   h__26->SetBinContent(36,70);
   h__26->SetBinContent(37,70);
   h__26->SetBinContent(38,46);
   h__26->SetBinContent(39,33);
   h__26->SetBinContent(40,33);
   h__26->SetBinContent(41,23);
   h__26->SetBinContent(42,17);
   h__26->SetBinContent(43,14);
   h__26->SetBinContent(44,7);
   h__26->SetBinContent(45,4);
   h__26->SetBinContent(46,2);
   h__26->SetBinContent(47,2);
   h__26->SetBinContent(48,3);
   h__26->SetBinContent(50,1);
   h__26->SetBinContent(51,1);
   h__26->SetEntries(1000);
   h__26->SetStats(0);
   h__26->SetLineWidth(3);
   h__26->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__26->GetXaxis()->CenterTitle(true);
   h__26->GetXaxis()->SetLabelFont(42);
   h__26->GetXaxis()->SetTitleSize(0.04);
   h__26->GetXaxis()->SetTitleOffset(1.1);
   h__26->GetXaxis()->SetTitleFont(42);
   h__26->GetYaxis()->SetTitle("Trials");
   h__26->GetYaxis()->CenterTitle(true);
   h__26->GetYaxis()->SetNdivisions(4000510);
   h__26->GetYaxis()->SetLabelFont(42);
   h__26->GetYaxis()->SetTitleSize(0.04);
   h__26->GetYaxis()->SetTitleOffset(1.1);
   h__26->GetYaxis()->SetTitleFont(42);
   h__26->GetZaxis()->SetLabelFont(42);
   h__26->GetZaxis()->SetTitleOffset(1);
   h__26->GetZaxis()->SetTitleFont(42);
   h__26->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.719
#pm0.003
");
   pt_LaTex = pt->AddText("0.087
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
