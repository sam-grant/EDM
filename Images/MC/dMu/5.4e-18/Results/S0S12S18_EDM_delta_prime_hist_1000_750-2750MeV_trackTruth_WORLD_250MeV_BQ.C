void S0S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:53:53 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__57 = new TH1D("h__57","",61,1.067596,2.291645);
   h__57->SetBinContent(20,1);
   h__57->SetBinContent(21,1);
   h__57->SetBinContent(22,3);
   h__57->SetBinContent(23,6);
   h__57->SetBinContent(24,11);
   h__57->SetBinContent(25,28);
   h__57->SetBinContent(26,36);
   h__57->SetBinContent(27,55);
   h__57->SetBinContent(28,67);
   h__57->SetBinContent(29,92);
   h__57->SetBinContent(30,89);
   h__57->SetBinContent(31,102);
   h__57->SetBinContent(32,113);
   h__57->SetBinContent(33,106);
   h__57->SetBinContent(34,72);
   h__57->SetBinContent(35,65);
   h__57->SetBinContent(36,47);
   h__57->SetBinContent(37,29);
   h__57->SetBinContent(38,35);
   h__57->SetBinContent(39,18);
   h__57->SetBinContent(40,8);
   h__57->SetBinContent(41,8);
   h__57->SetBinContent(42,3);
   h__57->SetBinContent(43,1);
   h__57->SetBinContent(45,1);
   h__57->SetBinContent(46,1);
   h__57->SetBinContent(47,1);
   h__57->SetBinContent(49,1);
   h__57->SetEntries(1000);
   h__57->SetStats(0);
   h__57->SetLineWidth(3);
   h__57->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__57->GetXaxis()->CenterTitle(true);
   h__57->GetXaxis()->SetLabelFont(42);
   h__57->GetXaxis()->SetTitleSize(0.04);
   h__57->GetXaxis()->SetTitleOffset(1.1);
   h__57->GetXaxis()->SetTitleFont(42);
   h__57->GetYaxis()->SetTitle("Trials");
   h__57->GetYaxis()->CenterTitle(true);
   h__57->GetYaxis()->SetNdivisions(4000510);
   h__57->GetYaxis()->SetLabelFont(42);
   h__57->GetYaxis()->SetTitleSize(0.04);
   h__57->GetYaxis()->SetTitleOffset(1.1);
   h__57->GetYaxis()->SetTitleFont(42);
   h__57->GetZaxis()->SetLabelFont(42);
   h__57->GetZaxis()->SetTitleOffset(1);
   h__57->GetZaxis()->SetTitleFont(42);
   h__57->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.692
#pm0.002
");
   pt_LaTex = pt->AddText("0.078
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
