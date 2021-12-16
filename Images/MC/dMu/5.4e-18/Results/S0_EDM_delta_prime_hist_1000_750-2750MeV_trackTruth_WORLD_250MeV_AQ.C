void S0_EDM_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:43:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__33 = new TH1D("h__33","",57,1.117055,2.268103);
   h__33->SetBinContent(22,4);
   h__33->SetBinContent(23,4);
   h__33->SetBinContent(24,15);
   h__33->SetBinContent(25,49);
   h__33->SetBinContent(26,75);
   h__33->SetBinContent(27,115);
   h__33->SetBinContent(28,135);
   h__33->SetBinContent(29,159);
   h__33->SetBinContent(30,164);
   h__33->SetBinContent(31,116);
   h__33->SetBinContent(32,66);
   h__33->SetBinContent(33,48);
   h__33->SetBinContent(34,27);
   h__33->SetBinContent(35,17);
   h__33->SetBinContent(36,2);
   h__33->SetBinContent(37,1);
   h__33->SetBinContent(38,1);
   h__33->SetBinContent(39,1);
   h__33->SetBinContent(40,1);
   h__33->SetEntries(1000);
   h__33->SetStats(0);
   h__33->SetLineWidth(3);
   h__33->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__33->GetXaxis()->CenterTitle(true);
   h__33->GetXaxis()->SetLabelFont(42);
   h__33->GetXaxis()->SetTitleSize(0.04);
   h__33->GetXaxis()->SetTitleOffset(1.1);
   h__33->GetXaxis()->SetTitleFont(42);
   h__33->GetYaxis()->SetTitle("Trials");
   h__33->GetYaxis()->CenterTitle(true);
   h__33->GetYaxis()->SetNdivisions(4000510);
   h__33->GetYaxis()->SetLabelFont(42);
   h__33->GetYaxis()->SetTitleSize(0.04);
   h__33->GetYaxis()->SetTitleOffset(1.1);
   h__33->GetYaxis()->SetTitleFont(42);
   h__33->GetZaxis()->SetLabelFont(42);
   h__33->GetZaxis()->SetTitleOffset(1);
   h__33->GetZaxis()->SetTitleFont(42);
   h__33->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.696
#pm0.002
");
   pt_LaTex = pt->AddText("0.051
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
