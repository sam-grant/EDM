void Asymmetry_wa_labFrame()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Sep 26 15:51:56 2020) by ROOT version 6.22/02
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(0,0,1,1);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   
   TF1 *N_24 = new TF1("N_2",";y=p/p_{max};Arbitrary units",0,1, TF1::EAddToList::kDefault);
   N_24->SetFillColor(19);
   N_24->SetFillStyle(0);
   N_24->SetLineWidth(3);
   N_24->GetXaxis()->SetTitle("y=p/p_{max}");
   N_24->GetXaxis()->CenterTitle(true);
   N_24->GetXaxis()->SetLabelFont(42);
   N_24->GetXaxis()->SetTitleSize(0.04);
   N_24->GetXaxis()->SetTitleOffset(1.1);
   N_24->GetXaxis()->SetTitleFont(42);
   N_24->GetYaxis()->SetTitle("Arbitrary units");
   N_24->GetYaxis()->CenterTitle(true);
   N_24->GetYaxis()->SetNdivisions(4000510);
   N_24->GetYaxis()->SetLabelFont(42);
   N_24->GetYaxis()->SetTitleSize(0.04);
   N_24->GetYaxis()->SetTitleOffset(1.1);
   N_24->GetYaxis()->SetTitleFont(42);
   N_24->Draw("");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("N_2"," N(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("A_2"," A(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NA2_2"," NA^{2}(y)","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TF1 *A_25 = new TF1("A_2","(1+x-8*x*x) / (4*x*x-5*x-5)",0,1, TF1::EAddToList::kDefault);
   A_25->SetFillColor(19);
   A_25->SetFillStyle(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   A_25->SetLineColor(ci);
   A_25->SetLineWidth(3);
   A_25->GetXaxis()->SetLabelFont(42);
   A_25->GetXaxis()->SetTitleOffset(1);
   A_25->GetXaxis()->SetTitleFont(42);
   A_25->GetYaxis()->SetLabelFont(42);
   A_25->GetYaxis()->SetTitleFont(42);
   A_25->Draw("same");
   
   TF1 *NA2_26 = new TF1("NA2_2","(1/0.0728538) * N_2 * A_2 * A_2",0,1, TF1::EAddToList::kDefault);
   NA2_26->SetFillColor(19);
   NA2_26->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   NA2_26->SetLineColor(ci);
   NA2_26->SetLineWidth(3);
   NA2_26->GetXaxis()->SetLabelFont(42);
   NA2_26->GetXaxis()->SetTitleOffset(1);
   NA2_26->GetXaxis()->SetTitleFont(42);
   NA2_26->GetYaxis()->SetLabelFont(42);
   NA2_26->GetYaxis()->SetTitleFont(42);
   NA2_26->Draw("same");
   TLine *line = new TLine(0,0,1,0);
   line->SetLineStyle(2);
   line->SetLineWidth(3);
   line->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
