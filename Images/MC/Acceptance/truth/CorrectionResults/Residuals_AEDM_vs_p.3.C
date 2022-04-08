void Residuals_AEDM_vs_p.3()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 29 09:03:08 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h_res__4 = new TH1D("h_res__4","Vertical offset corrections on both samples",20,-0.05,0.05);
   h_res__4->SetBinContent(6,4);
   h_res__4->SetBinContent(7,1);
   h_res__4->SetBinContent(9,1);
   h_res__4->SetBinContent(11,1);
   h_res__4->SetBinContent(13,1);
   h_res__4->SetEntries(8);
   h_res__4->SetStats(0);
   h_res__4->GetXaxis()->SetTitle("Residuals [mrad]");
   h_res__4->GetXaxis()->CenterTitle(true);
   h_res__4->GetXaxis()->SetLabelFont(42);
   h_res__4->GetXaxis()->SetTitleSize(0.04);
   h_res__4->GetXaxis()->SetTitleOffset(1.1);
   h_res__4->GetXaxis()->SetTitleFont(42);
   h_res__4->GetYaxis()->SetTitle("Entries");
   h_res__4->GetYaxis()->CenterTitle(true);
   h_res__4->GetYaxis()->SetNdivisions(4000510);
   h_res__4->GetYaxis()->SetLabelFont(42);
   h_res__4->GetYaxis()->SetTitleSize(0.04);
   h_res__4->GetYaxis()->SetTitleOffset(1.1);
   h_res__4->GetYaxis()->SetTitleFont(42);
   h_res__4->GetZaxis()->SetLabelFont(42);
   h_res__4->GetZaxis()->SetTitleOffset(1);
   h_res__4->GetZaxis()->SetTitleFont(42);
   h_res__4->Draw("HIST");
   
   TPaveText *pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(33);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   TText *pt_LaTex = pt->AddText("0.012
#pm0.003
");
   pt->Draw();
   
   pt = new TPaveText(0,0,0,0,"brNDC");
   pt->SetFillColor(0);
   pt->SetTextAlign(13);
   pt->SetTextFont(44);
   pt->SetTextSize(26);
   pt_LaTex = pt->AddText("#sigma [mrad]");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
