void S12_g2_delta_prime_hist_1000_750-2750MeV_Run-1d_250MeV_BQ_noAccCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Apr 20 00:10:52 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__22 = new TH1D("h__22","S12",20,-0.1629147,0.2381939);
   h__22->SetBinContent(10,562);
   h__22->SetBinContent(11,438);
   h__22->SetEntries(1000);
   h__22->SetStats(0);
   h__22->SetLineWidth(3);
   h__22->GetXaxis()->SetTitle("#delta'_{g#minus2}^{} [mrad]");
   h__22->GetXaxis()->CenterTitle(true);
   h__22->GetXaxis()->SetLabelFont(42);
   h__22->GetXaxis()->SetTitleSize(0.04);
   h__22->GetXaxis()->SetTitleOffset(1.1);
   h__22->GetXaxis()->SetTitleFont(42);
   h__22->GetYaxis()->SetTitle("Trials  / 0.02 [mrad]");
   h__22->GetYaxis()->CenterTitle(true);
   h__22->GetYaxis()->SetNdivisions(4000510);
   h__22->GetYaxis()->SetLabelFont(42);
   h__22->GetYaxis()->SetTitleSize(0.04);
   h__22->GetYaxis()->SetTitleOffset(1.1);
   h__22->GetYaxis()->SetTitleFont(42);
   h__22->GetZaxis()->SetLabelFont(42);
   h__22->GetZaxis()->SetTitleOffset(1);
   h__22->GetZaxis()->SetTitleFont(42);
   h__22->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.03747
#pm4e-05
");
   pt_LaTex = pt->AddText("0.0013
#pm3e-05
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
