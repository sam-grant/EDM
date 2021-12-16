void S0S12S18_g2_delta_prime_hist_1000_750-2750MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:15:26 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__70 = new TH1D("h__70","",50,-0.4492813,0.5541035);
   h__70->SetBinContent(23,33);
   h__70->SetBinContent(24,489);
   h__70->SetBinContent(25,452);
   h__70->SetBinContent(26,26);
   h__70->SetEntries(1000);
   h__70->SetStats(0);
   h__70->SetLineWidth(3);
   h__70->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__70->GetXaxis()->CenterTitle(true);
   h__70->GetXaxis()->SetLabelFont(42);
   h__70->GetXaxis()->SetTitleSize(0.04);
   h__70->GetXaxis()->SetTitleOffset(1.1);
   h__70->GetXaxis()->SetTitleFont(42);
   h__70->GetYaxis()->SetTitle("Trials");
   h__70->GetYaxis()->CenterTitle(true);
   h__70->GetYaxis()->SetNdivisions(4000510);
   h__70->GetYaxis()->SetLabelFont(42);
   h__70->GetYaxis()->SetTitleSize(0.04);
   h__70->GetYaxis()->SetTitleOffset(1.1);
   h__70->GetYaxis()->SetTitleFont(42);
   h__70->GetZaxis()->SetLabelFont(42);
   h__70->GetZaxis()->SetTitleOffset(1);
   h__70->GetZaxis()->SetTitleFont(42);
   h__70->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.03173
#pm0.0003
");
   pt_LaTex = pt->AddText("0.011
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
