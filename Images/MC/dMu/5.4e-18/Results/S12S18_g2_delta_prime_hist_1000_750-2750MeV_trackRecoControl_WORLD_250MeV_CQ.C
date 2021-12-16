void S12S18_g2_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:43:21 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__31 = new TH1D("h__31","",56,-1.001732,0.1323113);
   h__31->SetBinContent(17,1);
   h__31->SetBinContent(19,1);
   h__31->SetBinContent(21,2);
   h__31->SetBinContent(22,8);
   h__31->SetBinContent(23,11);
   h__31->SetBinContent(24,31);
   h__31->SetBinContent(25,54);
   h__31->SetBinContent(26,74);
   h__31->SetBinContent(27,157);
   h__31->SetBinContent(28,199);
   h__31->SetBinContent(29,241);
   h__31->SetBinContent(30,144);
   h__31->SetBinContent(31,72);
   h__31->SetBinContent(32,4);
   h__31->SetBinContent(33,1);
   h__31->SetEntries(1000);
   h__31->SetStats(0);
   h__31->SetLineWidth(3);
   h__31->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__31->GetXaxis()->CenterTitle(true);
   h__31->GetXaxis()->SetLabelFont(42);
   h__31->GetXaxis()->SetTitleSize(0.04);
   h__31->GetXaxis()->SetTitleOffset(1.1);
   h__31->GetXaxis()->SetTitleFont(42);
   h__31->GetYaxis()->SetTitle("Trials");
   h__31->GetYaxis()->CenterTitle(true);
   h__31->GetYaxis()->SetNdivisions(4000510);
   h__31->GetYaxis()->SetLabelFont(42);
   h__31->GetYaxis()->SetTitleSize(0.04);
   h__31->GetYaxis()->SetTitleOffset(1.1);
   h__31->GetYaxis()->SetTitleFont(42);
   h__31->GetZaxis()->SetLabelFont(42);
   h__31->GetZaxis()->SetTitleOffset(1);
   h__31->GetZaxis()->SetTitleFont(42);
   h__31->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.4443
#pm0.001
");
   pt_LaTex = pt->AddText("0.039
#pm0.0009
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
