void S12_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct 26 00:47:48 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__4 = new TH1D("h__4","",50,-0.5763174,0.4352465);
   h__4->SetBinContent(24,1);
   h__4->SetBinContent(25,233);
   h__4->SetBinContent(26,684);
   h__4->SetBinContent(27,82);
   h__4->SetEntries(1000);
   h__4->SetStats(0);
   h__4->SetLineWidth(3);
   h__4->GetXaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   h__4->GetXaxis()->CenterTitle(true);
   h__4->GetXaxis()->SetLabelFont(42);
   h__4->GetXaxis()->SetTitleSize(0.04);
   h__4->GetXaxis()->SetTitleOffset(1.1);
   h__4->GetXaxis()->SetTitleFont(42);
   h__4->GetYaxis()->SetTitle("Trials");
   h__4->GetYaxis()->CenterTitle(true);
   h__4->GetYaxis()->SetNdivisions(4000510);
   h__4->GetYaxis()->SetLabelFont(42);
   h__4->GetYaxis()->SetTitleSize(0.04);
   h__4->GetYaxis()->SetTitleOffset(1.1);
   h__4->GetYaxis()->SetTitleFont(42);
   h__4->GetZaxis()->SetLabelFont(42);
   h__4->GetZaxis()->SetTitleOffset(1);
   h__4->GetZaxis()->SetTitleFont(42);
   h__4->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("-0.06355
#pm0.0003
");
   pt_LaTex = pt->AddText("0.0097
#pm0.0002
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
