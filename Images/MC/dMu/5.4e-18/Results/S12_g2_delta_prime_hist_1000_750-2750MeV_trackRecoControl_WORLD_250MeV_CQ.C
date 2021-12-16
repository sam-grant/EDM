void S12_g2_delta_prime_hist_1000_750-2750MeV_trackRecoControl_WORLD_250MeV_CQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:42:52 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__29 = new TH1D("h__29","",57,-1.287869,-0.1366072);
   h__29->SetBinContent(12,1);
   h__29->SetBinContent(19,1);
   h__29->SetBinContent(20,1);
   h__29->SetBinContent(21,1);
   h__29->SetBinContent(22,1);
   h__29->SetBinContent(23,1);
   h__29->SetBinContent(24,2);
   h__29->SetBinContent(25,11);
   h__29->SetBinContent(26,13);
   h__29->SetBinContent(27,26);
   h__29->SetBinContent(28,36);
   h__29->SetBinContent(29,46);
   h__29->SetBinContent(30,109);
   h__29->SetBinContent(31,167);
   h__29->SetBinContent(32,220);
   h__29->SetBinContent(33,175);
   h__29->SetBinContent(34,139);
   h__29->SetBinContent(35,49);
   h__29->SetBinContent(36,1);
   h__29->SetEntries(1000);
   h__29->SetStats(0);
   h__29->SetLineWidth(3);
   h__29->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__29->GetXaxis()->CenterTitle(true);
   h__29->GetXaxis()->SetLabelFont(42);
   h__29->GetXaxis()->SetTitleSize(0.04);
   h__29->GetXaxis()->SetTitleOffset(1.1);
   h__29->GetXaxis()->SetTitleFont(42);
   h__29->GetYaxis()->SetTitle("Trials");
   h__29->GetYaxis()->CenterTitle(true);
   h__29->GetYaxis()->SetNdivisions(4000510);
   h__29->GetYaxis()->SetLabelFont(42);
   h__29->GetYaxis()->SetTitleSize(0.04);
   h__29->GetYaxis()->SetTitleOffset(1.1);
   h__29->GetYaxis()->SetTitleFont(42);
   h__29->GetZaxis()->SetLabelFont(42);
   h__29->GetZaxis()->SetTitleOffset(1);
   h__29->GetZaxis()->SetTitleFont(42);
   h__29->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.6605
#pm0.001
");
   pt_LaTex = pt->AddText("0.047
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
