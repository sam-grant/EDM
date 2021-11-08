void S12_g2_delta_prime_hist_1000()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 22 15:46:25 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TH1D *h__76 = new TH1D("h__76","",50,-0.4972102,0.5143885);
   h__76->SetBinContent(25,247);
   h__76->SetBinContent(26,753);
   h__76->SetEntries(1000);
   h__76->SetStats(0);
   h__76->SetLineWidth(3);
   h__76->GetXaxis()->SetTitle("#delta'_{g#minus2}^{BLIND} [mrad]");
   h__76->GetXaxis()->CenterTitle(true);
   h__76->GetXaxis()->SetLabelFont(42);
   h__76->GetXaxis()->SetTitleSize(0.04);
   h__76->GetXaxis()->SetTitleOffset(1.1);
   h__76->GetXaxis()->SetTitleFont(42);
   h__76->GetYaxis()->SetTitle("Trials");
   h__76->GetYaxis()->CenterTitle(true);
   h__76->GetYaxis()->SetNdivisions(4000510);
   h__76->GetYaxis()->SetLabelFont(42);
   h__76->GetYaxis()->SetTitleSize(0.04);
   h__76->GetYaxis()->SetTitleOffset(1.1);
   h__76->GetYaxis()->SetTitleFont(42);
   h__76->GetZaxis()->SetLabelFont(42);
   h__76->GetZaxis()->SetTitleOffset(1);
   h__76->GetZaxis()->SetTitleFont(42);
   h__76->Draw("HIST");
   
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
   pt_LaTex = pt->AddText("0.01164
#pm0.0001
");
   pt_LaTex = pt->AddText("0.0044
#pm0.0001
");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
