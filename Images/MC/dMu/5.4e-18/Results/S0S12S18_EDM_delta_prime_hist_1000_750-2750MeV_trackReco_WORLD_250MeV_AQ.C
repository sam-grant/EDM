void S0S12S18_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:48:51 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__47 = new TH1D("h__47","",55,1.142899,2.24986);
   h__47->SetBinContent(23,2);
   h__47->SetBinContent(24,13);
   h__47->SetBinContent(25,46);
   h__47->SetBinContent(26,117);
   h__47->SetBinContent(27,196);
   h__47->SetBinContent(28,238);
   h__47->SetBinContent(29,207);
   h__47->SetBinContent(30,101);
   h__47->SetBinContent(31,59);
   h__47->SetBinContent(32,16);
   h__47->SetBinContent(33,2);
   h__47->SetBinContent(34,2);
   h__47->SetBinContent(35,1);
   h__47->SetEntries(1000);
   h__47->SetStats(0);
   h__47->SetLineWidth(3);
   h__47->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__47->GetXaxis()->CenterTitle(true);
   h__47->GetXaxis()->SetLabelFont(42);
   h__47->GetXaxis()->SetTitleSize(0.04);
   h__47->GetXaxis()->SetTitleOffset(1.1);
   h__47->GetXaxis()->SetTitleFont(42);
   h__47->GetYaxis()->SetTitle("Trials");
   h__47->GetYaxis()->CenterTitle(true);
   h__47->GetYaxis()->SetNdivisions(4000510);
   h__47->GetYaxis()->SetLabelFont(42);
   h__47->GetYaxis()->SetTitleSize(0.04);
   h__47->GetYaxis()->SetTitleOffset(1.1);
   h__47->GetYaxis()->SetTitleFont(42);
   h__47->GetZaxis()->SetLabelFont(42);
   h__47->GetZaxis()->SetTitleOffset(1);
   h__47->GetZaxis()->SetTitleFont(42);
   h__47->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.697
#pm0.001
");
   pt_LaTex = pt->AddText("0.033
#pm0.0007
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
