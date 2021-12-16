void S0_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:47:09 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__43 = new TH1D("h__43","",58,1.110332,2.286909);
   h__43->SetBinContent(22,3);
   h__43->SetBinContent(23,8);
   h__43->SetBinContent(24,17);
   h__43->SetBinContent(25,47);
   h__43->SetBinContent(26,69);
   h__43->SetBinContent(27,103);
   h__43->SetBinContent(28,125);
   h__43->SetBinContent(29,147);
   h__43->SetBinContent(30,163);
   h__43->SetBinContent(31,106);
   h__43->SetBinContent(32,88);
   h__43->SetBinContent(33,48);
   h__43->SetBinContent(34,41);
   h__43->SetBinContent(35,20);
   h__43->SetBinContent(36,10);
   h__43->SetBinContent(37,1);
   h__43->SetBinContent(38,1);
   h__43->SetBinContent(39,1);
   h__43->SetBinContent(40,1);
   h__43->SetBinContent(41,1);
   h__43->SetEntries(1000);
   h__43->SetStats(0);
   h__43->SetLineWidth(3);
   h__43->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__43->GetXaxis()->CenterTitle(true);
   h__43->GetXaxis()->SetLabelFont(42);
   h__43->GetXaxis()->SetTitleSize(0.04);
   h__43->GetXaxis()->SetTitleOffset(1.1);
   h__43->GetXaxis()->SetTitleFont(42);
   h__43->GetYaxis()->SetTitle("Trials");
   h__43->GetYaxis()->CenterTitle(true);
   h__43->GetYaxis()->SetNdivisions(4000510);
   h__43->GetYaxis()->SetLabelFont(42);
   h__43->GetYaxis()->SetTitleSize(0.04);
   h__43->GetYaxis()->SetTitleOffset(1.1);
   h__43->GetYaxis()->SetTitleFont(42);
   h__43->GetZaxis()->SetLabelFont(42);
   h__43->GetZaxis()->SetTitleOffset(1);
   h__43->GetZaxis()->SetTitleFont(42);
   h__43->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.696
#pm0.002
");
   pt_LaTex = pt->AddText("0.055
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
