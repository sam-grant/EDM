void S18_g2_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:43:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__30 = new TH1D("h__30","",55,-0.7959791,0.3189814);
   h__30->SetBinContent(16,1);
   h__30->SetBinContent(19,1);
   h__30->SetBinContent(21,1);
   h__30->SetBinContent(22,1);
   h__30->SetBinContent(23,4);
   h__30->SetBinContent(24,11);
   h__30->SetBinContent(25,30);
   h__30->SetBinContent(26,43);
   h__30->SetBinContent(27,112);
   h__30->SetBinContent(28,171);
   h__30->SetBinContent(29,271);
   h__30->SetBinContent(30,259);
   h__30->SetBinContent(31,91);
   h__30->SetBinContent(32,4);
   h__30->SetEntries(1000);
   h__30->SetStats(0);
   h__30->SetLineWidth(3);
   h__30->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__30->GetXaxis()->CenterTitle(true);
   h__30->GetXaxis()->SetLabelFont(42);
   h__30->GetXaxis()->SetTitleSize(0.04);
   h__30->GetXaxis()->SetTitleOffset(1.1);
   h__30->GetXaxis()->SetTitleFont(42);
   h__30->GetYaxis()->SetTitle("Trials");
   h__30->GetYaxis()->CenterTitle(true);
   h__30->GetYaxis()->SetNdivisions(4000510);
   h__30->GetYaxis()->SetLabelFont(42);
   h__30->GetYaxis()->SetTitleSize(0.04);
   h__30->GetYaxis()->SetTitleOffset(1.1);
   h__30->GetYaxis()->SetTitleFont(42);
   h__30->GetZaxis()->SetLabelFont(42);
   h__30->GetZaxis()->SetTitleOffset(1);
   h__30->GetZaxis()->SetTitleFont(42);
   h__30->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.2245
#pm0.001
");
   pt_LaTex = pt->AddText("0.034
#pm0.0008
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
