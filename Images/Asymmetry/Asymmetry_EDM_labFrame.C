void Asymmetry_EDM_labFrame()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 22 14:38:32 2020) by ROOT version 6.16/00
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TF1 *N1 = new TF1("N",";y=p/p_{max};Relative scale",0,1, TF1::EAddToList::kDefault);
   N1->SetFillColor(19);
   N1->SetFillStyle(0);
   N1->SetLineWidth(3);
   N1->GetXaxis()->SetTitle("y=p/p_{max}");
   N1->GetXaxis()->CenterTitle(true);
   N1->GetXaxis()->SetLabelFont(42);
   N1->GetXaxis()->SetLabelSize(0.035);
   N1->GetXaxis()->SetTitleOffset(1.1);
   N1->GetXaxis()->SetTitleFont(42);
   N1->GetYaxis()->SetTitle("Relative scale");
   N1->GetYaxis()->CenterTitle(true);
   N1->GetYaxis()->SetNdivisions(4000510);
   N1->GetYaxis()->SetLabelFont(42);
   N1->GetYaxis()->SetLabelSize(0.035);
   N1->GetYaxis()->SetTitleOffset(1.1);
   N1->GetYaxis()->SetTitleFont(42);
   N1->Draw("");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("N","N(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("A_edm","A(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NA2","NA^{2}(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TF1 *A_edm2 = new TF1("A_edm","( x * (2*x + 1) ) / ( -x*x + x + 3 )",0,1, TF1::EAddToList::kDefault);
   A_edm2->SetFillColor(19);
   A_edm2->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   A_edm2->SetLineColor(ci);
   A_edm2->SetLineWidth(3);
   A_edm2->GetXaxis()->SetLabelFont(42);
   A_edm2->GetXaxis()->SetLabelSize(0.035);
   A_edm2->GetXaxis()->SetTitleSize(0.035);
   A_edm2->GetXaxis()->SetTitleOffset(1);
   A_edm2->GetXaxis()->SetTitleFont(42);
   A_edm2->GetYaxis()->SetLabelFont(42);
   A_edm2->GetYaxis()->SetLabelSize(0.035);
   A_edm2->GetYaxis()->SetTitleSize(0.035);
   A_edm2->GetYaxis()->SetTitleFont(42);
   A_edm2->Draw("same");
   
   TF1 *NA23 = new TF1("NA2","35.1765 * N * A_edm * A_edm",0,1, TF1::EAddToList::kDefault);
   NA23->SetFillColor(19);
   NA23->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   NA23->SetLineColor(ci);
   NA23->SetLineWidth(3);
   NA23->GetXaxis()->SetLabelFont(42);
   NA23->GetXaxis()->SetLabelSize(0.035);
   NA23->GetXaxis()->SetTitleSize(0.035);
   NA23->GetXaxis()->SetTitleOffset(1);
   NA23->GetXaxis()->SetTitleFont(42);
   NA23->GetYaxis()->SetLabelFont(42);
   NA23->GetYaxis()->SetLabelSize(0.035);
   NA23->GetYaxis()->SetTitleSize(0.035);
   NA23->GetYaxis()->SetTitleFont(42);
   NA23->Draw("same");
   TLine *line = new TLine(0,0,1,0);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
