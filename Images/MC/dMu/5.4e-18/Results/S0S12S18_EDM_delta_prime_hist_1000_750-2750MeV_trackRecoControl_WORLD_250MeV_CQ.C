void S0S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__27 = new TH1D("h__27","",62,1.06969,2.32167);
   h__27->SetBinContent(20,1);
   h__27->SetBinContent(24,2);
   h__27->SetBinContent(25,8);
   h__27->SetBinContent(26,12);
   h__27->SetBinContent(27,23);
   h__27->SetBinContent(28,52);
   h__27->SetBinContent(29,85);
   h__27->SetBinContent(30,93);
   h__27->SetBinContent(31,127);
   h__27->SetBinContent(32,115);
   h__27->SetBinContent(33,118);
   h__27->SetBinContent(34,103);
   h__27->SetBinContent(35,80);
   h__27->SetBinContent(36,54);
   h__27->SetBinContent(37,41);
   h__27->SetBinContent(38,32);
   h__27->SetBinContent(39,29);
   h__27->SetBinContent(40,8);
   h__27->SetBinContent(41,7);
   h__27->SetBinContent(42,4);
   h__27->SetBinContent(43,4);
   h__27->SetBinContent(44,1);
   h__27->SetBinContent(45,1);
   h__27->SetEntries(1000);
   h__27->SetStats(0);
   h__27->SetLineWidth(3);
   h__27->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__27->GetXaxis()->CenterTitle(true);
   h__27->GetXaxis()->SetLabelFont(42);
   h__27->GetXaxis()->SetTitleSize(0.04);
   h__27->GetXaxis()->SetTitleOffset(1.1);
   h__27->GetXaxis()->SetTitleFont(42);
   h__27->GetYaxis()->SetTitle("Trials");
   h__27->GetYaxis()->CenterTitle(true);
   h__27->GetYaxis()->SetNdivisions(4000510);
   h__27->GetYaxis()->SetLabelFont(42);
   h__27->GetYaxis()->SetTitleSize(0.04);
   h__27->GetYaxis()->SetTitleOffset(1.1);
   h__27->GetYaxis()->SetTitleFont(42);
   h__27->GetZaxis()->SetLabelFont(42);
   h__27->GetZaxis()->SetTitleOffset(1);
   h__27->GetZaxis()->SetTitleFont(42);
   h__27->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.717
#pm0.002
");
   pt_LaTex = pt->AddText("0.068
#pm0.002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
