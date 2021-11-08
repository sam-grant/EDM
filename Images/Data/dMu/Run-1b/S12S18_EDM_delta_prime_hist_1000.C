void S12S18_EDM_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:22 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__75 = new TH1D("h__75","",51,-0.1676415,0.855458);
   h__75->SetBinContent(23,1);
   h__75->SetBinContent(24,4);
   h__75->SetBinContent(25,86);
   h__75->SetBinContent(26,315);
   h__75->SetBinContent(27,419);
   h__75->SetBinContent(28,143);
   h__75->SetBinContent(29,30);
   h__75->SetBinContent(30,2);
   h__75->SetEntries(1000);
   h__75->SetStats(0);
   h__75->SetLineWidth(3);
   h__75->GetXaxis()->SetTitle("#delta'_{EDM}^{BLIND} [mrad]");
   h__75->GetXaxis()->CenterTitle(true);
   h__75->GetXaxis()->SetLabelFont(42);
   h__75->GetXaxis()->SetTitleSize(0.04);
   h__75->GetXaxis()->SetTitleOffset(1.1);
   h__75->GetXaxis()->SetTitleFont(42);
   h__75->GetYaxis()->SetTitle("Trials");
   h__75->GetYaxis()->CenterTitle(true);
   h__75->GetYaxis()->SetNdivisions(4000510);
   h__75->GetYaxis()->SetLabelFont(42);
   h__75->GetYaxis()->SetTitleSize(0.04);
   h__75->GetYaxis()->SetTitleOffset(1.1);
   h__75->GetYaxis()->SetTitleFont(42);
   h__75->GetZaxis()->SetLabelFont(42);
   h__75->GetZaxis()->SetTitleOffset(1);
   h__75->GetZaxis()->SetTitleFont(42);
   h__75->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.3581
#pm0.0006
");
   pt_LaTex = pt->AddText("0.018
#pm0.0004
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
