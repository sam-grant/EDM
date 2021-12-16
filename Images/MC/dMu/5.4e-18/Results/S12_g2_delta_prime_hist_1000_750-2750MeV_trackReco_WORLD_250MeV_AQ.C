void S12_g2_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:49:47 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__49 = new TH1D("h__49","",51,-0.7324083,0.2877115);
   h__49->SetBinContent(24,2);
   h__49->SetBinContent(25,89);
   h__49->SetBinContent(26,706);
   h__49->SetBinContent(27,203);
   h__49->SetEntries(1000);
   h__49->SetStats(0);
   h__49->SetLineWidth(3);
   h__49->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__49->GetXaxis()->CenterTitle(true);
   h__49->GetXaxis()->SetLabelFont(42);
   h__49->GetXaxis()->SetTitleSize(0.04);
   h__49->GetXaxis()->SetTitleOffset(1.1);
   h__49->GetXaxis()->SetTitleFont(42);
   h__49->GetYaxis()->SetTitle("Trials");
   h__49->GetYaxis()->CenterTitle(true);
   h__49->GetYaxis()->SetNdivisions(4000510);
   h__49->GetYaxis()->SetLabelFont(42);
   h__49->GetYaxis()->SetTitleSize(0.04);
   h__49->GetYaxis()->SetTitleOffset(1.1);
   h__49->GetYaxis()->SetTitleFont(42);
   h__49->GetZaxis()->SetLabelFont(42);
   h__49->GetZaxis()->SetTitleOffset(1);
   h__49->GetZaxis()->SetTitleFont(42);
   h__49->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.2201
#pm0.0003
");
   pt_LaTex = pt->AddText("0.0092
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
