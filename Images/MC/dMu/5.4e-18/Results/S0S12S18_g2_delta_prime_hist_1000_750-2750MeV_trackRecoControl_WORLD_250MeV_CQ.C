void S0S12S18_g2_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:43:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__32 = new TH1D("h__32","",54,-0.9221729,0.1659529);
   h__32->SetBinContent(21,1);
   h__32->SetBinContent(22,1);
   h__32->SetBinContent(23,9);
   h__32->SetBinContent(24,29);
   h__32->SetBinContent(25,75);
   h__32->SetBinContent(26,205);
   h__32->SetBinContent(27,324);
   h__32->SetBinContent(28,277);
   h__32->SetBinContent(29,74);
   h__32->SetBinContent(30,4);
   h__32->SetBinContent(31,1);
   h__32->SetEntries(1000);
   h__32->SetStats(0);
   h__32->SetLineWidth(3);
   h__32->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__32->GetXaxis()->CenterTitle(true);
   h__32->GetXaxis()->SetLabelFont(42);
   h__32->GetXaxis()->SetTitleSize(0.04);
   h__32->GetXaxis()->SetTitleOffset(1.1);
   h__32->GetXaxis()->SetTitleFont(42);
   h__32->GetYaxis()->SetTitle("Trials");
   h__32->GetYaxis()->CenterTitle(true);
   h__32->GetYaxis()->SetNdivisions(4000510);
   h__32->GetYaxis()->SetLabelFont(42);
   h__32->GetYaxis()->SetTitleSize(0.04);
   h__32->GetYaxis()->SetTitleOffset(1.1);
   h__32->GetYaxis()->SetTitleFont(42);
   h__32->GetZaxis()->SetLabelFont(42);
   h__32->GetZaxis()->SetTitleOffset(1);
   h__32->GetZaxis()->SetTitleFont(42);
   h__32->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.3892
#pm0.0008
");
   pt_LaTex = pt->AddText("0.025
#pm0.0006
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
