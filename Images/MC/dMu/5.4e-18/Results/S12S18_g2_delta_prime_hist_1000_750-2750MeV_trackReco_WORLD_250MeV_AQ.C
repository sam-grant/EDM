void S12S18_g2_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:50:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__51 = new TH1D("h__51","",50,-0.6516439,0.3583843);
   h__51->SetBinContent(25,435);
   h__51->SetBinContent(26,565);
   h__51->SetEntries(1000);
   h__51->SetStats(0);
   h__51->SetLineWidth(3);
   h__51->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__51->GetXaxis()->CenterTitle(true);
   h__51->GetXaxis()->SetLabelFont(42);
   h__51->GetXaxis()->SetTitleSize(0.04);
   h__51->GetXaxis()->SetTitleOffset(1.1);
   h__51->GetXaxis()->SetTitleFont(42);
   h__51->GetYaxis()->SetTitle("Trials");
   h__51->GetYaxis()->CenterTitle(true);
   h__51->GetYaxis()->SetNdivisions(4000510);
   h__51->GetYaxis()->SetLabelFont(42);
   h__51->GetYaxis()->SetTitleSize(0.04);
   h__51->GetYaxis()->SetTitleOffset(1.1);
   h__51->GetYaxis()->SetTitleFont(42);
   h__51->GetZaxis()->SetLabelFont(42);
   h__51->GetZaxis()->SetTitleOffset(1);
   h__51->GetZaxis()->SetTitleFont(42);
   h__51->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.146
#pm0.0001
");
   pt_LaTex = pt->AddText("0.0039
#pm9e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
