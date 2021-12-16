void S12_EDM_delta_prime_hist_1000_750-2750MeV_trackReco_WORLD_250MeV_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Dec  6 11:47:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__44 = new TH1D("h__44","",59,1.097334,2.289495);
   h__44->SetBinContent(22,5);
   h__44->SetBinContent(23,5);
   h__44->SetBinContent(24,13);
   h__44->SetBinContent(25,38);
   h__44->SetBinContent(26,61);
   h__44->SetBinContent(27,83);
   h__44->SetBinContent(28,108);
   h__44->SetBinContent(29,117);
   h__44->SetBinContent(30,136);
   h__44->SetBinContent(31,142);
   h__44->SetBinContent(32,92);
   h__44->SetBinContent(33,76);
   h__44->SetBinContent(34,41);
   h__44->SetBinContent(35,40);
   h__44->SetBinContent(36,22);
   h__44->SetBinContent(37,13);
   h__44->SetBinContent(38,3);
   h__44->SetBinContent(39,1);
   h__44->SetBinContent(40,1);
   h__44->SetBinContent(41,1);
   h__44->SetBinContent(42,1);
   h__44->SetBinContent(44,1);
   h__44->SetEntries(1000);
   h__44->SetStats(0);
   h__44->SetLineWidth(3);
   h__44->GetXaxis()->SetTitle("#delta'_{EDM} [mrad]");
   h__44->GetXaxis()->CenterTitle(true);
   h__44->GetXaxis()->SetLabelFont(42);
   h__44->GetXaxis()->SetTitleSize(0.04);
   h__44->GetXaxis()->SetTitleOffset(1.1);
   h__44->GetXaxis()->SetTitleFont(42);
   h__44->GetYaxis()->SetTitle("Trials");
   h__44->GetYaxis()->CenterTitle(true);
   h__44->GetYaxis()->SetNdivisions(4000510);
   h__44->GetYaxis()->SetLabelFont(42);
   h__44->GetYaxis()->SetTitleSize(0.04);
   h__44->GetYaxis()->SetTitleOffset(1.1);
   h__44->GetYaxis()->SetTitleFont(42);
   h__44->GetZaxis()->SetLabelFont(42);
   h__44->GetZaxis()->SetTitleOffset(1);
   h__44->GetZaxis()->SetTitleFont(42);
   h__44->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("1.694
#pm0.002
");
   pt_LaTex = pt->AddText("0.061
#pm0.001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
