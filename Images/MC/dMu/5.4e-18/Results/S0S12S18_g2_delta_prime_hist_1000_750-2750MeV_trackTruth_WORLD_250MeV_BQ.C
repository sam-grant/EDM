void S0S12S18_g2_delta_prime_hist_1000_750-2750MeV_trackTruth_WORLD_250MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:56:46 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__62 = new TH1D("h__62","",50,-0.4346617,0.5659673);
   h__62->SetBinContent(23,18);
   h__62->SetBinContent(24,458);
   h__62->SetBinContent(25,495);
   h__62->SetBinContent(26,29);
   h__62->SetEntries(1000);
   h__62->SetStats(0);
   h__62->SetLineWidth(3);
   h__62->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__62->GetXaxis()->CenterTitle(true);
   h__62->GetXaxis()->SetLabelFont(42);
   h__62->GetXaxis()->SetTitleSize(0.04);
   h__62->GetXaxis()->SetTitleOffset(1.1);
   h__62->GetXaxis()->SetTitleFont(42);
   h__62->GetYaxis()->SetTitle("Trials");
   h__62->GetYaxis()->CenterTitle(true);
   h__62->GetYaxis()->SetNdivisions(4000510);
   h__62->GetYaxis()->SetLabelFont(42);
   h__62->GetYaxis()->SetTitleSize(0.04);
   h__62->GetYaxis()->SetTitleOffset(1.1);
   h__62->GetYaxis()->SetTitleFont(42);
   h__62->GetZaxis()->SetLabelFont(42);
   h__62->GetZaxis()->SetTitleOffset(1);
   h__62->GetZaxis()->SetTitleFont(42);
   h__62->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.0463
#pm0.0003
");
   pt_LaTex = pt->AddText("0.01
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
