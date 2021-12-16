void S12_g2_delta_prime_hist_1000_750-2750MeV()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Dec  5 23:13:28 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__67 = new TH1D("h__67","",50,-0.5665159,0.4470743);
   h__67->SetBinContent(23,2);
   h__67->SetBinContent(24,184);
   h__67->SetBinContent(25,781);
   h__67->SetBinContent(26,33);
   h__67->SetEntries(1000);
   h__67->SetStats(0);
   h__67->SetLineWidth(3);
   h__67->GetXaxis()->SetTitle("#delta'_{g#minus2} [mrad]");
   h__67->GetXaxis()->CenterTitle(true);
   h__67->GetXaxis()->SetLabelFont(42);
   h__67->GetXaxis()->SetTitleSize(0.04);
   h__67->GetXaxis()->SetTitleOffset(1.1);
   h__67->GetXaxis()->SetTitleFont(42);
   h__67->GetYaxis()->SetTitle("Trials");
   h__67->GetYaxis()->CenterTitle(true);
   h__67->GetYaxis()->SetNdivisions(4000510);
   h__67->GetYaxis()->SetLabelFont(42);
   h__67->GetYaxis()->SetTitleSize(0.04);
   h__67->GetYaxis()->SetTitleOffset(1.1);
   h__67->GetYaxis()->SetTitleFont(42);
   h__67->GetZaxis()->SetLabelFont(42);
   h__67->GetZaxis()->SetTitleOffset(1);
   h__67->GetZaxis()->SetTitleFont(42);
   h__67->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.07325
#pm0.0003
");
   pt_LaTex = pt->AddText("0.008
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
